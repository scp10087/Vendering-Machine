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
{

}

CLOGIN::~CLOGIN()
{
}

void CLOGIN::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CLOGIN, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &CLOGIN::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &CLOGIN::OnBnClickedButton2)
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
	CVenderingMachineDlg *pMMD = (CVenderingMachineDlg*)AfxGetMainWnd();
	pMMD->ShowPage(4);//跳到管理员对话框
}
