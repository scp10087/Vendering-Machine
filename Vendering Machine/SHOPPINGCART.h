#pragma once


// CSHOPPINGCART �Ի���

class CSHOPPINGCART : public CDialogEx
{
	DECLARE_DYNAMIC(CSHOPPINGCART)

public:
	CSHOPPINGCART(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CSHOPPINGCART();

// �Ի�������
	enum { IDD = IDD_SHOPPINGCART };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton1();
	virtual BOOL OnInitDialog();
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	afx_msg void OnPaint();
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
};
