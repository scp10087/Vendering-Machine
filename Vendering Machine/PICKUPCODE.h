#pragma once


// CPICKUPCODE 对话框

class CPICKUPCODE : public CDialogEx
{
	DECLARE_DYNAMIC(CPICKUPCODE)

public:
	CPICKUPCODE(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CPICKUPCODE();

// 对话框数据
	enum { IDD = IDD_PICKUPCODE };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	virtual BOOL OnInitDialog();
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};
