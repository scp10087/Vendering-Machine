// GOODS.cpp : 实现文件
//

#include "stdafx.h"
#include "Vendering Machine.h"
#include "GOODS.h"
#include "afxdialogex.h"
#include "Vendering MachineDlg.h"

// CGOODS 对话框

IMPLEMENT_DYNAMIC(CGOODS, CDialogEx)

CGOODS::CGOODS(CWnd* pParent /*=NULL*/)
	: CDialogEx(CGOODS::IDD, pParent)
{

}

CGOODS::~CGOODS()
{
}

void CGOODS::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CGOODS, CDialogEx)
	ON_BN_CLICKED(IDOK, &CGOODS::OnBnClickedOk)
	ON_BN_CLICKED(IDC_BUTTON2, &CGOODS::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON1, &CGOODS::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON3, &CGOODS::OnBnClickedButton3)
END_MESSAGE_MAP()


// CGOODS 消息处理程序


void CGOODS::OnBnClickedOk()
{
	// TODO:  在此添加控件通知处理程序代码
	CVenderingMachineDlg *pMMD = (CVenderingMachineDlg*)AfxGetMainWnd();
	pMMD->ShowPage(1);//跳到帮助对话框
}





void CGOODS::OnBnClickedButton2()
{
	// TODO:  在此添加控件通知处理程序代码
	CVenderingMachineDlg *pMMD = (CVenderingMachineDlg*)AfxGetMainWnd();
	pMMD->ShowPage(3);//跳到取货码对话框
}


void CGOODS::OnBnClickedButton1()
{
	// TODO:  在此添加控件通知处理程序代码
	CVenderingMachineDlg *pMMD = (CVenderingMachineDlg*)AfxGetMainWnd();
	pMMD->ShowPage(2);//跳到管理员登陆对话框
}


void CGOODS::OnBnClickedButton3()
{
	// TODO:  在此添加控件通知处理程序代码
	CVenderingMachineDlg *pMMD = (CVenderingMachineDlg*)AfxGetMainWnd();
	pMMD->ShowPage(5);//跳到购物车对话框
}
