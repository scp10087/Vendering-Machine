// SELECT.cpp : 实现文件
//

#include "stdafx.h"
#include "Vendering Machine.h"
#include "SELECT.h"



// CSELECT

IMPLEMENT_DYNCREATE(CSELECT, CTreeView)

CSELECT::CSELECT()
{
	m_bCanSendMsg = false;
}

CSELECT::~CSELECT()
{
}

BEGIN_MESSAGE_MAP(CSELECT, CTreeView)
	ON_NOTIFY_REFLECT(TVN_SELCHANGED, &CSELECT::OnTvnSelchanged)
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


void CSELECT::OnInitialUpdate()
{
	CTreeView::OnInitialUpdate();

	// TODO:  在此添加专用代码和/或调用基类
	//初始化 书试图
	//获取树控件
	m_treeCtrl = &GetTreeCtrl();
	//准备图片集合
	HICON icon = AfxGetApp()->LoadIconW(IDI_ICON1);
	m_imageList.Create(30, 30, ILC_COLOR32, 1, 1);
	m_imageList.Add(icon);
	m_treeCtrl->SetImageList(&m_imageList,TVSIL_NORMAL);
	//添加节点
	m_treeCtrl->InsertItem(TEXT("修改密码"), 0, 0, NULL);
	m_treeCtrl->InsertItem(TEXT("查看销售记录"), 0, 0, NULL);
	m_treeCtrl->InsertItem(TEXT("查看商品信息"), 0, 0, NULL);
	m_treeCtrl->InsertItem(TEXT("修改商品信息"), 0, 0, NULL);
	m_treeCtrl->InsertItem(TEXT("退出登陆"), 0, 0, NULL);
}


void CSELECT::OnTvnSelchanged(NMHDR *pNMHDR, LRESULT *pResult)
{
	LPNMTREEVIEW pNMTreeView = reinterpret_cast<LPNMTREEVIEW>(pNMHDR);
	// TODO:  在此添加控件通知处理程序代码
	*pResult = 0;
	//获取当前选中项
	HTREEITEM item = m_treeCtrl->GetSelectedItem();
	//通过选中项获取这个选中项中的内容
	CString str = m_treeCtrl->GetItemText(item);
	//需要包含框架类头文件#include "ADMINISTRATOR"
	//CWnd::PostMessage将一个消息放入窗口的消息队列
	//AfxGetMainWnd(),框架窗口对象的指针
	//AfxGetMainWnd()->GetSafeHwnd(),返回窗口的句柄，CWnd::GetSafeHwnd
	//NM_A,发送自定义消息
	//(WPARAM)NM_A,指定了附加的消息信息
	//(LPARAM)0,指定了附加的消息信息，此参数这里没有意义AfxGetMainWnd()->GetSafeHwnd()
	if (!m_bCanSendMsg){
		ad.Create(IDD_ADMINISTRATOR, this);
	}
	m_bCanSendMsg = true;
	ad.ShowWindow(SW_HIDE);
	HWND h = ad.GetSafeHwnd();

	
	if (str == TEXT("修改密码"))
	{
	
		::PostMessage(h, NM_A, (WPARAM)NM_A, (LPARAM)0);
	}
	if (str == TEXT("查看销售记录"))
	{

		::PostMessage(h, NM_B, (WPARAM)NM_B, (LPARAM)0);
	}
	if (str == TEXT("查看商品信息"))
	{

		::PostMessage(h, NM_C, (WPARAM)NM_C, (LPARAM)0);
	}
	if (str == TEXT("修改商品信息"))
	{

		::PostMessage(h, NM_D, (WPARAM)NM_D, (LPARAM)0);
	}
	if (str == TEXT("退出登陆"))
	{

		::PostMessage(h, NM_E, (WPARAM)NM_E, (LPARAM)0);
	}

}
