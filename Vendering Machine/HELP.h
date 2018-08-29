#pragma once


// CHELP 对话框

class CHELP : public CDialogEx
{
	DECLARE_DYNAMIC(CHELP)

public:
	CHELP(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CHELP();

// 对话框数据
	enum { IDD = IDD_HELP };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
};
