
// Vendering MachineDlg.cpp : 实现文件
//

#include "stdafx.h"
#include "Vendering Machine.h"
#include "Vendering MachineDlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// 用于应用程序“关于”菜单项的 CAboutDlg 对话框

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// 对话框数据
	enum { IDD = IDD_ABOUTBOX };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

// 实现
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(CAboutDlg::IDD)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CVenderingMachineDlg 对话框



CVenderingMachineDlg::CVenderingMachineDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CVenderingMachineDlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CVenderingMachineDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CVenderingMachineDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
END_MESSAGE_MAP()


// CVenderingMachineDlg 消息处理程序

BOOL CVenderingMachineDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 将“关于...”菜单项添加到系统菜单中。

	// IDM_ABOUTBOX 必须在系统命令范围内。
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// 设置此对话框的图标。  当应用程序主窗口不是对话框时，框架将自动
	//  执行此操作
	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标

	// TODO:  在此添加额外的初始化代码
	//商品界面初始化
	cgoods = new CGOODS;
	cgoods->Create(IDD_GOODS, this);
	GetWindowRect(m_ShowRect);
	m_ShowRect = CRect(0, 0, m_ShowRect.Width(),m_ShowRect.Height());
	cgoods->MoveWindow(m_ShowRect);
	cgoods->ShowWindow(SW_HIDE);
	//帮助界面初始化
	chelp = new CHELP;
	chelp->Create(IDD_HELP, this);
	chelp->ShowWindow(SW_SHOW);

	GetWindowRect(m_ShowRect);
	m_ShowRect = CRect(0, 0, m_ShowRect.Width(), m_ShowRect.Height());
	chelp->MoveWindow(m_ShowRect);
	ShowPage(0);


	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
}

void CVenderingMachineDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// 如果向对话框添加最小化按钮，则需要下面的代码
//  来绘制该图标。  对于使用文档/视图模型的 MFC 应用程序，
//  这将由框架自动完成。

void CVenderingMachineDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 用于绘制的设备上下文

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 使图标在工作区矩形中居中
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 绘制图标
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//当用户拖动最小化窗口时系统调用此函数取得光标
//显示。
HCURSOR CVenderingMachineDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}
BOOL CVenderingMachineDlg::AddPage(CDialog * pDlg, UINT ID)
{

	m_pDlgPages[m_nDlgPageIdx] = pDlg;
	m_DlgIDD[m_nDlgPageIdx] = ID;
	m_pDlgPages[m_nDlgPageIdx]->Create(ID, this);
	m_pDlgPages[m_nDlgPageIdx]->MoveWindow(m_ShowRect);
	m_nDlgPageIdx++;

	return TRUE;
}
void CVenderingMachineDlg::ShowPage(int CurrentPage)
{
	switch (CurrentPage)
	{
	case DLG_CGOODS:
	{
		cgoods->ShowWindow(SW_SHOW);
		chelp->ShowWindow(SW_HIDE);
		SetTimer(1, 1000, NULL);
	}
	break;
	case DLG_CHELP:
	{
		cgoods->ShowWindow(SW_HIDE);
		chelp->ShowWindow(SW_SHOW);
		KillTimer(1);
	}
	break;
	}
}