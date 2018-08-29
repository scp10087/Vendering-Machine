// ADMINISTRATOR.cpp : 实现文件
//

#include "stdafx.h"
#include "Vendering Machine.h"
#include "ADMINISTRATOR.h"
#include "afxdialogex.h"
#include "Vendering MachineDlg.h"


// CADMINISTRATOR 对话框

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
	ON_BN_CLICKED(IDC_BUTTON1, &CADMINISTRATOR::OnBnClickedButton1)
END_MESSAGE_MAP()


// CADMINISTRATOR 消息处理程序


void CADMINISTRATOR::OnBnClickedButton1()
{
	// TODO:  在此添加控件通知处理程序代码
	CVenderingMachineDlg *pMMD = (CVenderingMachineDlg*)AfxGetMainWnd();
	pMMD->ShowPage(0);//跳到商品对话框
}
