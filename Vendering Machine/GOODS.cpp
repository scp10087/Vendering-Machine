// GOODS.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "Vendering Machine.h"
#include "GOODS.h"
#include "afxdialogex.h"
#include "Vendering MachineDlg.h"

// CGOODS �Ի���

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


// CGOODS ��Ϣ�������


void CGOODS::OnBnClickedOk()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	CVenderingMachineDlg *pMMD = (CVenderingMachineDlg*)AfxGetMainWnd();
	pMMD->ShowPage(1);//���������Ի���
}





void CGOODS::OnBnClickedButton2()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	CVenderingMachineDlg *pMMD = (CVenderingMachineDlg*)AfxGetMainWnd();
	pMMD->ShowPage(3);//����ȡ����Ի���
}


void CGOODS::OnBnClickedButton1()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	CVenderingMachineDlg *pMMD = (CVenderingMachineDlg*)AfxGetMainWnd();
	pMMD->ShowPage(2);//��������Ա��½�Ի���
}


void CGOODS::OnBnClickedButton3()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	CVenderingMachineDlg *pMMD = (CVenderingMachineDlg*)AfxGetMainWnd();
	pMMD->ShowPage(5);//�������ﳵ�Ի���
}
