
// Vendering MachineDlg.h : 头文件
//

#pragma once
#include "GOODS.h"
#include "HELP.h"
// CVenderingMachineDlg 对话框
class CVenderingMachineDlg : public CDialogEx
{
// 构造
public:
	CVenderingMachineDlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
	enum { IDD = IDD_VENDERINGMACHINE_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	CGOODS   *cgoods;
	CHELP *chelp;

	enum
	{
		DLG_CGOODS = 0,
		DLG_CHELP,
	};

	///加载界面
	BOOL AddPage(CDialog * pDlg, UINT ID);
	///切换界面
	void ShowPage(int CurrentPage);

	//////添加多界面
	CDialog *m_pDlgPages[2];///自定义需要显示的界面个数
	UINT        m_DlgIDD[2];      ///每个对话框对应的ID
	int m_nDlgPageIdx ;
	CRect m_ShowRect;
	

	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
};
