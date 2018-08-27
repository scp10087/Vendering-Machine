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
	ON_BN_CLICKED(IDCANCEL, &CHELP::OnBnClickedCancel)
	ON_WM_CTLCOLOR()
END_MESSAGE_MAP()


// CHELP ��Ϣ�������


void CHELP::OnBnClickedOk()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	CVenderingMachineDlg *pMMD = (CVenderingMachineDlg*)AfxGetMainWnd();
	pMMD->ShowPage(0);//����GOODS�Ի���
}


void CHELP::OnBnClickedCancel()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	CDialogEx::OnCancel();
}


HBRUSH CHELP::OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor)
{
	HBRUSH hbr = CDialogEx::OnCtlColor(pDC, pWnd, nCtlColor);

	// TODO:  �ڴ˸��� DC ���κ�����
	static CBrush gBr;
	static bool isInited = false;
	if (!isInited)
	{
		CBitmap bitmap;
		bitmap.LoadBitmap(IDB_BITMAP2);
		gBr.CreatePatternBrush(&bitmap);
		COLORREF clearColor = -1;
		bitmap.DeleteObject();
		isInited = true;
	}
	if (pWnd == this)
	{
		pDC->SetBkMode(TRANSPARENT);
		return gBr; //�����ڱ���ʹ���������ˢ
	}
	else
	{
		pDC->SetBkMode(TRANSPARENT);
		return   (HBRUSH)::GetStockObject(NULL_BRUSH); //�����ؼ�ʹ��͸������
	}


	// TODO:  ���Ĭ�ϵĲ������軭�ʣ��򷵻���һ������
	return hbr;
}
