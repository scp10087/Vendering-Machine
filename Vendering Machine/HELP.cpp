// HELP.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "Vendering Machine.h"
#include "HELP.h"
#include "afxdialogex.h"
#include "Vendering MachineDlg.h"

// CHELP �Ի���

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


// CHELP ��Ϣ�������


void CHELP::OnBnClickedOk()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	CVenderingMachineDlg *pMMD = (CVenderingMachineDlg*)AfxGetMainWnd();
	pMMD->ShowPage(0);//����GOODS�Ի���
}


