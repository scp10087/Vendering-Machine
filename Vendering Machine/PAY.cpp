// PAY.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "Vendering Machine.h"
#include "PAY.h"
#include "afxdialogex.h"
#include "Vendering MachineDlg.h"


// CPAY �Ի���

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
	ON_WM_TIMER()
END_MESSAGE_MAP()


// CPAY ��Ϣ�������


void CPAY::OnBnClickedButton1()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	CVenderingMachineDlg *pMMD = (CVenderingMachineDlg*)AfxGetMainWnd();
	pMMD->ShowPage(5);//�������ﳵ�Ի���
}


BOOL CPAY::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  �ڴ���Ӷ���ĳ�ʼ��
	SetTimer(1, 1000, NULL);

	return TRUE;  // return TRUE unless you set the focus to a control
	// �쳣:  OCX ����ҳӦ���� FALSE
}


void CPAY::OnTimer(UINT_PTR nIDEvent)
{
	// TODO:  �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CTime t = CTime::GetCurrentTime();
	CString strTime = t.Format(_T("%Y-%m-%d %H:%M:%S"));
	SetDlgItemText(IDC_TIME4, strTime);

	CDialogEx::OnTimer(nIDEvent);
}
