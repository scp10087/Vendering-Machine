// HELP.cpp : 实现文件
//

#include "stdafx.h"
#include "Vendering Machine.h"
#include "HELP.h"
#include "afxdialogex.h"
#include "Vendering MachineDlg.h"

// CHELP 对话框

IMPLEMENT_DYNAMIC(CHELP, CDialogEx)

CHELP::CHELP(CWnd* pParent /*=NULL*/)
	: CDialogEx(CHELP::IDD, pParent)
{

}

CHELP::~CHELP()
{
}

void CHELP::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CHELP, CDialogEx)
	ON_BN_CLICKED(IDOK, &CHELP::OnBnClickedOk)
END_MESSAGE_MAP()


// CHELP 消息处理程序


void CHELP::OnBnClickedOk()
{
	// TODO:  在此添加控件通知处理程序代码
	CVenderingMachineDlg *pMMD = (CVenderingMachineDlg*)AfxGetMainWnd();
	pMMD->ShowPage(0);//跳到GOODS对话框
}


