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
	ON_BN_CLICKED(IDCANCEL, &CGOODS::OnBnClickedCancel)
	ON_WM_CTLCOLOR()
END_MESSAGE_MAP()


// CGOODS ��Ϣ�������


void CGOODS::OnBnClickedOk()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	CVenderingMachineDlg *pMMD = (CVenderingMachineDlg*)AfxGetMainWnd();
	pMMD->ShowPage(1);//����setup�Ի���
}


void CGOODS::OnBnClickedCancel()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	CDialogEx::OnCancel();
}


HBRUSH CGOODS::OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor)
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
