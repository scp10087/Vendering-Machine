// ADM_LOGIN.cpp : 实现文件
//

#include "stdafx.h"
#include "Vendering Machine.h"
#include "ADM_LOGIN.h"


// ADM_LOGIN

IMPLEMENT_DYNCREATE(ADM_LOGIN, CFormView)

ADM_LOGIN::ADM_LOGIN()
	: CFormView(ADM_LOGIN::IDD)
	, m_admpwd(_T(""))
	, m_admnewpwd(_T(""))
{

}

ADM_LOGIN::~ADM_LOGIN()
{
}

void ADM_LOGIN::DoDataExchange(CDataExchange* pDX)
{
	CFormView::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT3, m_admpwd);
	DDX_Text(pDX, IDC_EDIT2, m_admnewpwd);
}

BEGIN_MESSAGE_MAP(ADM_LOGIN, CFormView)
END_MESSAGE_MAP()


// ADM_LOGIN 诊断

#ifdef _DEBUG
void ADM_LOGIN::AssertValid() const
{
	CFormView::AssertValid();
}

#ifndef _WIN32_WCE
void ADM_LOGIN::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}
#endif
#endif //_DEBUG


// ADM_LOGIN 消息处理程序
