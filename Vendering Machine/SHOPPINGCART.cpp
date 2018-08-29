// SHOPPINGCART.cpp : 实现文件
//

#include "stdafx.h"
#include "Vendering Machine.h"
#include "SHOPPINGCART.h"
#include "afxdialogex.h"
#include "Vendering MachineDlg.h"


// CSHOPPINGCART 对话框

IMPLEMENT_DYNAMIC(CSHOPPINGCART, CDialogEx)

CSHOPPINGCART::CSHOPPINGCART(CWnd* pParent /*=NULL*/)
	: CDialogEx(CSHOPPINGCART::IDD, pParent)
{

}

CSHOPPINGCART::~CSHOPPINGCART()
{
}

void CSHOPPINGCART::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CSHOPPINGCART, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON2, &CSHOPPINGCART::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON1, &CSHOPPINGCART::OnBnClickedButton1)
END_MESSAGE_MAP()


// CSHOPPINGCART 消息处理程序


void CSHOPPINGCART::OnBnClickedButton2()
{
	// TODO:  在此添加控件通知处理程序代码
	CVenderingMachineDlg *pMMD = (CVenderingMachineDlg*)AfxGetMainWnd();
	pMMD->ShowPage(0);//跳到商品对话框
}


void CSHOPPINGCART::OnBnClickedButton1()
{
	// TODO:  在此添加控件通知处理程序代码
	CVenderingMachineDlg *pMMD = (CVenderingMachineDlg*)AfxGetMainWnd();
	pMMD->ShowPage(6);//跳到支付对话框
}
