// DISPLAY.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "Vendering Machine.h"
#include "DISPLAY.h"


// CDISPLAY

IMPLEMENT_DYNCREATE(CDISPLAY, CFormView)

CDISPLAY::CDISPLAY()
	: CFormView(CDISPLAY::IDD)
{

}

CDISPLAY::~CDISPLAY()
{
}

void CDISPLAY::DoDataExchange(CDataExchange* pDX)
{
	CFormView::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CDISPLAY, CFormView)
END_MESSAGE_MAP()


// CDISPLAY ���

#ifdef _DEBUG
void CDISPLAY::AssertValid() const
{
	CFormView::AssertValid();
}

#ifndef _WIN32_WCE
void CDISPLAY::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}
#endif
#endif //_DEBUG


// CDISPLAY ��Ϣ�������
