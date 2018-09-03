#pragma once
//自定义消息
#define NM_A (WM_USER + 100)
#define NM_B (WM_USER + 101)
#define NM_C (WM_USER + 102)
#define NM_D (WM_USER + 103)
#define NM_E (WM_USER + 104)
// CADMINISTRATOR 对话框

class CADMINISTRATOR : public CDialogEx
{
	DECLARE_DYNAMIC(CADMINISTRATOR)

public:
	CADMINISTRATOR(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CADMINISTRATOR();

// 对话框数据
	enum { IDD = IDD_ADMINISTRATOR };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
public:
	CFrameWnd *m_pMyFrame;
	CSplitterWnd m_cSplitter;
	afx_msg void OnDestroy();
	afx_msg void OnSize(UINT nType, int cx, int cy);
	afx_msg LRESULT OnMyChange(WPARAM wParam, LPARAM lParam);
	virtual BOOL OnInitDialog();
};
