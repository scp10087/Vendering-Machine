#pragma once


// CGOODS 对话框

class CGOODS : public CDialogEx
{
	DECLARE_DYNAMIC(CGOODS)

public:
	CGOODS(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CGOODS();

// 对话框数据
	enum { IDD = IDD_GOODS };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();

	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton3();
};
