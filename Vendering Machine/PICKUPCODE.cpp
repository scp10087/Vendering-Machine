// PICKUPCODE.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "Vendering Machine.h"
#include "PICKUPCODE.h"
#include "afxdialogex.h"
#include "Vendering MachineDlg.h"

// CPICKUPCODE �Ի���

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
	ON_WM_TIMER()
END_MESSAGE_MAP()


// CPICKUPCODE ��Ϣ�������


void CPICKUPCODE::OnBnClickedButton1()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	CVenderingMachineDlg *pMMD = (CVenderingMachineDlg*)AfxGetMainWnd();
	pMMD->ShowPage(0);//������Ʒ�Ի���
}


BOOL CPICKUPCODE::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  �ڴ���Ӷ���ĳ�ʼ��
	SetTimer(1, 1000, NULL);

	return TRUE;  // return TRUE unless you set the focus to a control
	// �쳣:  OCX ����ҳӦ���� FALSE
}


void CPICKUPCODE::OnTimer(UINT_PTR nIDEvent)
{
	// TODO:  �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CTime t = CTime::GetCurrentTime();
	CString strTime = t.Format(_T("%Y-%m-%d %H:%M:%S"));
	SetDlgItemText(IDC_TIME5, strTime);

	CDialogEx::OnTimer(nIDEvent);
}
