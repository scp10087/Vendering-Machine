#pragma once



// ADM_LOGIN ������ͼ

class ADM_LOGIN : public CFormView
{
	DECLARE_DYNCREATE(ADM_LOGIN)

protected:
	ADM_LOGIN();           // ��̬������ʹ�õ��ܱ����Ĺ��캯��
	virtual ~ADM_LOGIN();

public:
	enum { IDD = IDD_ADM_LOGIN };
#ifdef _DEBUG
	virtual void AssertValid() const;
#ifndef _WIN32_WCE
	virtual void Dump(CDumpContext& dc) const;
#endif
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
private:
	CString m_admpwd;
	CString m_admnewpwd;
};


