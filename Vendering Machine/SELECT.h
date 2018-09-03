#pragma once

#include "ADMINISTRATOR.h"
// CSELECT ��ͼ

class CSELECT : public CTreeView
{
	DECLARE_DYNCREATE(CSELECT)

protected:
	CSELECT();           // ��̬������ʹ�õ��ܱ����Ĺ��캯��
	virtual ~CSELECT();

public:
#ifdef _DEBUG
	virtual void AssertValid() const;
#ifndef _WIN32_WCE
	virtual void Dump(CDumpContext& dc) const;
#endif
#endif

protected:
	DECLARE_MESSAGE_MAP()
private:
	CTreeCtrl *m_treeCtrl;
	CImageList m_imageList;
	CADMINISTRATOR ad;
	bool m_bCanSendMsg;
public:
	virtual void OnInitialUpdate();
	afx_msg void OnTvnSelchanged(NMHDR *pNMHDR, LRESULT *pResult);
};


