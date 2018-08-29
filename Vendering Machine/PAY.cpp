// PAY.cpp : 实现文件
//

#include "stdafx.h"
#include "Vendering Machine.h"
#include "PAY.h"
#include "afxdialogex.h"
#include "Vendering MachineDlg.h"


// CPAY 对话框

IMPLEMENT_DYNAMIC(CPAY, CDialogEx)

CPAY::CPAY(CWnd* pParent /*=NULL*/)
	: CDialogEx(CPAY::IDD, pParent)
{

}

CPAY::~CPAY()
{
}

void CPAY::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CPAY, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &CPAY::OnBnClickedButton1)
END_MESSAGE_MAP()


// CPAY 消息处理程序


void CPAY::OnBnClickedButton1()
{
	// TODO:  在此添加控件通知处理程序代码
	CVenderingMachineDlg *pMMD = (CVenderingMachineDlg*)AfxGetMainWnd();
	pMMD->ShowPage(5);//跳到购物车对话框
}
