// SHOPPINGCART.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "Vendering Machine.h"
#include "SHOPPINGCART.h"
#include "afxdialogex.h"
#include "Vendering MachineDlg.h"


// CSHOPPINGCART �Ի���

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
	ON_WM_TIMER()
END_MESSAGE_MAP()


// CSHOPPINGCART ��Ϣ�������


void CSHOPPINGCART::OnBnClickedButton2()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	CVenderingMachineDlg *pMMD = (CVenderingMachineDlg*)AfxGetMainWnd();
	pMMD->ShowPage(0);//������Ʒ�Ի���
}


void CSHOPPINGCART::OnBnClickedButton1()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	CVenderingMachineDlg *pMMD = (CVenderingMachineDlg*)AfxGetMainWnd();
	pMMD->ShowPage(6);//����֧���Ի���
}


BOOL CSHOPPINGCART::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  �ڴ���Ӷ���ĳ�ʼ��
	SetTimer(1, 1000, NULL);

	return TRUE;  // return TRUE unless you set the focus to a control
	// �쳣:  OCX ����ҳӦ���� FALSE
}


void CSHOPPINGCART::OnTimer(UINT_PTR nIDEvent)
{
	// TODO:  �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CTime t = CTime::GetCurrentTime();
	CString strTime = t.Format(_T("%Y-%m-%d %H:%M:%S"));
	SetDlgItemText(IDC_TIME6, strTime);

	CDialogEx::OnTimer(nIDEvent);
}
