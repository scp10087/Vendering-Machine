// LOGIN.cpp : 实现文件
//

#include "stdafx.h"
#include "Vendering Machine.h"
#include "LOGIN.h"
#include "afxdialogex.h"
#include "Vendering MachineDlg.h"


// CLOGIN 对话框

IMPLEMENT_DYNAMIC(CLOGIN, CDialogEx)

CLOGIN::CLOGIN(CWnd* pParent /*=NULL*/)
	: CDialogEx(CLOGIN::IDD, pParent)
	, m_pwd(_T(""))
{

}

CLOGIN::~CLOGIN()
{
}

void CLOGIN::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, m_pwd);
}


BEGIN_MESSAGE_MAP(CLOGIN, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &CLOGIN::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &CLOGIN::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON5, &CLOGIN::OnBnClickedButton5)
	ON_BN_CLICKED(IDC_BUTTON4, &CLOGIN::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON3, &CLOGIN::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON8, &CLOGIN::OnBnClickedButton8)
	ON_BN_CLICKED(IDC_BUTTON9, &CLOGIN::OnBnClickedButton9)
	ON_BN_CLICKED(IDC_BUTTON7, &CLOGIN::OnBnClickedButton7)
	ON_BN_CLICKED(IDC_BUTTON6, &CLOGIN::OnBnClickedButton6)
	ON_BN_CLICKED(IDC_BUTTON11, &CLOGIN::OnBnClickedButton11)
	ON_BN_CLICKED(IDC_BUTTON10, &CLOGIN::OnBnClickedButton10)
	ON_BN_CLICKED(IDC_BUTTON12, &CLOGIN::OnBnClickedButton12)
	ON_BN_CLICKED(IDC_BUTTON13, &CLOGIN::OnBnClickedButton13)
END_MESSAGE_MAP()


// CLOGIN 消息处理程序


void CLOGIN::OnBnClickedButton1()
{
	// TODO:  在此添加控件通知处理程序代码
	CVenderingMachineDlg *pMMD = (CVenderingMachineDlg*)AfxGetMainWnd();
	pMMD->ShowPage(0);//跳到商品对话框
}


void CLOGIN::OnBnClickedButton2()
{
	// TODO:  在此添加控件通知处理程序代码
	CInfoFile cinfofile;
	CString pwd;
	cinfofile.ReadPwd(pwd);
	if (m_pwd == pwd)
	{
		CVenderingMachineDlg *pMMD = (CVenderingMachineDlg*)AfxGetMainWnd();
		pMMD->ShowPage(4);//跳到管理员对话框
	}
	else
	{
		MessageBox(TEXT("输入密码错误"));
	}
}


void CLOGIN::OnOK()
{
	// TODO:  在此添加专用代码和/或调用基类

	//CDialogEx::OnOK();
}


void CLOGIN::OnBnClickedButton5()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_pwd = m_pwd + '9';
	UpdateData(FALSE);
}


void CLOGIN::OnBnClickedButton4()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_pwd = m_pwd + '8';
	UpdateData(FALSE);
}


void CLOGIN::OnBnClickedButton3()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_pwd = m_pwd + '7';
	UpdateData(FALSE);
}


void CLOGIN::OnBnClickedButton8()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_pwd = m_pwd + '6';
	UpdateData(FALSE);
}


void CLOGIN::OnBnClickedButton9()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_pwd = m_pwd + '1';
	UpdateData(FALSE);
}


void CLOGIN::OnBnClickedButton7()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_pwd = m_pwd + '5';
	UpdateData(FALSE);
}



void CLOGIN::OnBnClickedButton6()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_pwd = m_pwd + '4';
	UpdateData(FALSE);
}


void CLOGIN::OnBnClickedButton11()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_pwd = m_pwd + '3';
	UpdateData(FALSE);

}


void CLOGIN::OnBnClickedButton10()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_pwd = m_pwd + '2';
	UpdateData(FALSE);
}


void CLOGIN::OnBnClickedButton12()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_pwd = m_pwd + '0';
	UpdateData(FALSE);
}


void CLOGIN::OnBnClickedButton13()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	if (!m_pwd.IsEmpty())
	{
		m_pwd = m_pwd.Left(m_pwd.GetLength() - 1);
	}
	UpdateData(FALSE);
}
