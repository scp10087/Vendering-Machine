#pragma once

#include "ADMINISTRATOR.h"
// CSELECT 视图

class CSELECT : public CTreeView
{
	DECLARE_DYNCREATE(CSELECT)

protected:
	CSELECT();           // 动态创建所使用的受保护的构造函数
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


