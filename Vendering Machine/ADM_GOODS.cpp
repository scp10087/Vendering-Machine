// ADM_GOODS.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "Vendering Machine.h"
#include "ADM_GOODS.h"


// ADM_GOODS

IMPLEMENT_DYNCREATE(ADM_GOODS, CFormView)

ADM_GOODS::ADM_GOODS()
	: CFormView(ADM_GOODS::IDD)
{

}

ADM_GOODS::~ADM_GOODS()
{
}

void ADM_GOODS::DoDataExchange(CDataExchange* pDX)
{
	CFormView::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(ADM_GOODS, CFormView)
END_MESSAGE_MAP()


// ADM_GOODS ���

#ifdef _DEBUG
void ADM_GOODS::AssertValid() const
{
	CFormView::AssertValid();
}

#ifndef _WIN32_WCE
void ADM_GOODS::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}
#endif
#endif //_DEBUG


// ADM_GOODS ��Ϣ�������
