// PICKUPCODE.cpp : 实现文件
//

#include "stdafx.h"
#include "Vendering Machine.h"
#include "PICKUPCODE.h"
#include "afxdialogex.h"
#include "Vendering MachineDlg.h"

// CPICKUPCODE 对话框

IMPLEMENT_DYNAMIC(CPICKUPCODE, CDialogEx)

CPICKUPCODE::CPICKUPCODE(CWnd* pParent /*=NULL*/)
	: CDialogEx(CPICKUPCODE::IDD, pParent)
{

}

CPICKUPCODE::~CPICKUPCODE()
{
}

void CPICKUPCODE::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CPICKUPCODE, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &CPICKUPCODE::OnBnClickedButton1)
END_MESSAGE_MAP()


// CPICKUPCODE 消息处理程序


void CPICKUPCODE::OnBnClickedButton1()
{
	// TODO:  在此添加控件通知处理程序代码
	CVenderingMachineDlg *pMMD = (CVenderingMachineDlg*)AfxGetMainWnd();
	pMMD->ShowPage(0);//跳到商品对话框
}
