// SELECT.cpp : ʵ���ļ�
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


void CSELECT::OnInitialUpdate()
{
	CTreeView::OnInitialUpdate();

	// TODO:  �ڴ����ר�ô����/����û���
	//��ʼ�� ����ͼ
	//��ȡ���ؼ�
	m_treeCtrl = &GetTreeCtrl();
	//׼��ͼƬ����
	HICON icon = AfxGetApp()->LoadIconW(IDI_ICON1);
	m_imageList.Create(30, 30, ILC_COLOR32, 1, 1);
	m_imageList.Add(icon);
	m_treeCtrl->SetImageList(&m_imageList,TVSIL_NORMAL);
	//��ӽڵ�
	m_treeCtrl->InsertItem(TEXT("�޸�����"), 0, 0, NULL);
	m_treeCtrl->InsertItem(TEXT("�鿴���ۼ�¼"), 0, 0, NULL);
	m_treeCtrl->InsertItem(TEXT("�鿴��Ʒ��Ϣ"), 0, 0, NULL);
	m_treeCtrl->InsertItem(TEXT("�޸���Ʒ��Ϣ"), 0, 0, NULL);
	m_treeCtrl->InsertItem(TEXT("�˳���½"), 0, 0, NULL);
}


void CSELECT::OnTvnSelchanged(NMHDR *pNMHDR, LRESULT *pResult)
{
	LPNMTREEVIEW pNMTreeView = reinterpret_cast<LPNMTREEVIEW>(pNMHDR);
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	*pResult = 0;
	//��ȡ��ǰѡ����
	HTREEITEM item = m_treeCtrl->GetSelectedItem();
	//ͨ��ѡ�����ȡ���ѡ�����е�����
	CString str = m_treeCtrl->GetItemText(item);
	//��Ҫ���������ͷ�ļ�#include "ADMINISTRATOR"
	//CWnd::PostMessage��һ����Ϣ���봰�ڵ���Ϣ����
	//AfxGetMainWnd(),��ܴ��ڶ����ָ��
	//AfxGetMainWnd()->GetSafeHwnd(),���ش��ڵľ����CWnd::GetSafeHwnd
	//NM_A,�����Զ�����Ϣ
	//(WPARAM)NM_A,ָ���˸��ӵ���Ϣ��Ϣ
	//(LPARAM)0,ָ���˸��ӵ���Ϣ��Ϣ���˲�������û������AfxGetMainWnd()->GetSafeHwnd()
	if (!m_bCanSendMsg){
		ad.Create(IDD_ADMINISTRATOR, this);
	}
	m_bCanSendMsg = true;
	ad.ShowWindow(SW_HIDE);
	HWND h = ad.GetSafeHwnd();

	
	if (str == TEXT("�޸�����"))
	{
	
		::PostMessage(h, NM_A, (WPARAM)NM_A, (LPARAM)0);
	}
	if (str == TEXT("�鿴���ۼ�¼"))
	{

		::PostMessage(h, NM_B, (WPARAM)NM_B, (LPARAM)0);
	}
	if (str == TEXT("�鿴��Ʒ��Ϣ"))
	{

		::PostMessage(h, NM_C, (WPARAM)NM_C, (LPARAM)0);
	}
	if (str == TEXT("�޸���Ʒ��Ϣ"))
	{

		::PostMessage(h, NM_D, (WPARAM)NM_D, (LPARAM)0);
	}
	if (str == TEXT("�˳���½"))
	{

		::PostMessage(h, NM_E, (WPARAM)NM_E, (LPARAM)0);
	}

}
