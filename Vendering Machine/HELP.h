#pragma once


// CHELP �Ի���

class CHELP : public CDialogEx
{
	DECLARE_DYNAMIC(CHELP)

public:
	CHELP(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CHELP();

// �Ի�������
	enum { IDD = IDD_HELP };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
};
