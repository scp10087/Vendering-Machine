// ADMINISTRATOR.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "Vendering Machine.h"
#include "ADMINISTRATOR.h"
#include "afxdialogex.h"
#include "Vendering MachineDlg.h"
#include "ADM_GOODS.h"
#include "ADM_LOGIN.h"
#include "DISPLAY.h"
#include "SELECT.h"

// CADMINISTRATOR �Ի���

IMPLEMENT_DYNAMIC(CADMINISTRATOR, CDialogEx)

CADMINISTRATOR::CADMINISTRATOR(CWnd* pParent /*=NULL*/)
	: CDialogEx(CADMINISTRATOR::IDD, pParent)
{

}

CADMINISTRATOR::~CADMINISTRATOR()
{
}

void CADMINISTRATOR::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CADMINISTRATOR, CDialogEx)

	ON_WM_CREATE()
	ON_WM_DESTROY()
	ON_WM_SIZE()
	ON_MESSAGE(NM_A, OnMyChange)
	ON_MESSAGE(NM_B, OnMyChange)
	ON_MESSAGE(NM_C, OnMyChange)
	ON_MESSAGE(NM_D, OnMyChange)
	ON_MESSAGE(NM_E, OnMyChange)
END_MESSAGE_MAP()


// CADMINISTRATOR ��Ϣ�������




int CADMINISTRATOR::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CDialogEx::OnCreate(lpCreateStruct) == -1)
		return -1;

	// TODO:  �ڴ������ר�õĴ�������
	CString strMyClass = AfxRegisterWndClass(CS_VREDRAW | CS_HREDRAW,
		::LoadCursor(NULL, IDC_ARROW), (HBRUSH) ::GetStockObject(WHITE_BRUSH),
		::LoadIcon(NULL, IDI_APPLICATION));
	m_pMyFrame = new CFrameWnd;
	m_pMyFrame->Create(strMyClass, _T(""), WS_CHILD, CRect(0, 0, 800, 500), this);
	m_pMyFrame->ShowWindow(SW_SHOW);
	m_cSplitter.CreateStatic(m_pMyFrame, 1, 2);
	//m_cSplitter.CreateView(0, 0, RUNTIME_CLASS(ADM_GOODS), CSize(100, 100), NULL);
	//m_cSplitter.CreateView(0, 1, RUNTIME_CLASS(ADM_LOGIN), CSize(100, 100), NULL);
	m_cSplitter.CreateView(0, 0, RUNTIME_CLASS(CSELECT), CSize(150, 500), NULL);
	m_cSplitter.CreateView(0, 1, RUNTIME_CLASS(CDISPLAY), CSize(600, 500), NULL);
	return 0;
}


void CADMINISTRATOR::OnDestroy()
{
	CDialogEx::OnDestroy();

	// TODO:  �ڴ˴������Ϣ����������
	//if (m_pMyFrame) delete m_pMyFrame;
}


void CADMINISTRATOR::OnSize(UINT nType, int cx, int cy)
{
	CDialogEx::OnSize(nType, cx, cy);

	// TODO:  �ڴ˴������Ϣ����������
	CRect cRect;
	GetWindowRect(&cRect);
	ScreenToClient(&cRect);
	m_pMyFrame->MoveWindow(&cRect);
	m_pMyFrame->ShowWindow(SW_SHOW);
}
LRESULT CADMINISTRATOR::OnMyChange(WPARAM wParam, LPARAM lParam)
{
	if (wParam == NM_A)
	{
		MessageBox(TEXT("Hello World"));
	}
	if (wParam == NM_B)
	{
	}
	if (wParam == NM_C)
	{
	}
	if (wParam == NM_D)
	{
	}
	if (wParam == NM_E)
	{
	}

	return 0;
}

BOOL CADMINISTRATOR::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  �ڴ���Ӷ���ĳ�ʼ��;
	return TRUE;  // return TRUE unless you set the focus to a control
	// �쳣:  OCX ����ҳӦ���� FALSE
}
