// SELECT.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "Vendering Machine.h"
#include "SELECT.h"


// CSELECT

IMPLEMENT_DYNCREATE(CSELECT, CTreeView)

CSELECT::CSELECT()
{

}

CSELECT::~CSELECT()
{
}

BEGIN_MESSAGE_MAP(CSELECT, CTreeView)
END_MESSAGE_MAP()


// CSELECT ���

#ifdef _DEBUG
void CSELECT::AssertValid() const
{
	CTreeView::AssertValid();
}

#ifndef _WIN32_WCE
void CSELECT::Dump(CDumpContext& dc) const
{
	CTreeView::Dump(dc);
}
#endif
#endif //_DEBUG


// CSELECT ��Ϣ�������
