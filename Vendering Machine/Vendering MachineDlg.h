
// Vendering MachineDlg.h : ͷ�ļ�
//

#pragma once
#include "GOODS.h"
#include "HELP.h"
// CVenderingMachineDlg �Ի���
class CVenderingMachineDlg : public CDialogEx
{
// ����
public:
	CVenderingMachineDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_VENDERINGMACHINE_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
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

	///���ؽ���
	BOOL AddPage(CDialog * pDlg, UINT ID);
	///�л�����
	void ShowPage(int CurrentPage);

	//////��Ӷ����
	CDialog *m_pDlgPages[2];///�Զ�����Ҫ��ʾ�Ľ������
	UINT        m_DlgIDD[2];      ///ÿ���Ի����Ӧ��ID
	int m_nDlgPageIdx ;
	CRect m_ShowRect;
	

};
