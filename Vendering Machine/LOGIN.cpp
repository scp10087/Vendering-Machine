// LOGIN.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "Vendering Machine.h"
#include "LOGIN.h"
#include "afxdialogex.h"
#include "Vendering MachineDlg.h"


// CLOGIN �Ի���

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


// CLOGIN ��Ϣ�������


void CLOGIN::OnBnClickedButton1()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	CVenderingMachineDlg *pMMD = (CVenderingMachineDlg*)AfxGetMainWnd();
	pMMD->ShowPage(0);//������Ʒ�Ի���
}


void CLOGIN::OnBnClickedButton2()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	CVenderingMachineDlg *pMMD = (CVenderingMachineDlg*)AfxGetMainWnd();
	pMMD->ShowPage(4);//��������Ա�Ի���
}
