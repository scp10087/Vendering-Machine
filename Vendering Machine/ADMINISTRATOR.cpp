// ADMINISTRATOR.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "Vendering Machine.h"
#include "ADMINISTRATOR.h"
#include "afxdialogex.h"
#include "Vendering MachineDlg.h"


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
	ON_BN_CLICKED(IDC_BUTTON1, &CADMINISTRATOR::OnBnClickedButton1)
END_MESSAGE_MAP()


// CADMINISTRATOR ��Ϣ�������


void CADMINISTRATOR::OnBnClickedButton1()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	CVenderingMachineDlg *pMMD = (CVenderingMachineDlg*)AfxGetMainWnd();
	pMMD->ShowPage(0);//������Ʒ�Ի���
}
