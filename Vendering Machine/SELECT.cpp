// SELECT.cpp : 实现文件
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


// CSELECT 诊断

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


// CSELECT 消息处理程序
