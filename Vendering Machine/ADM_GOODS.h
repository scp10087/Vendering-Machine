#pragma once



// ADM_GOODS ������ͼ

class ADM_GOODS : public CFormView
{
	DECLARE_DYNCREATE(ADM_GOODS)

protected:
	ADM_GOODS();           // ��̬������ʹ�õ��ܱ����Ĺ��캯��
	virtual ~ADM_GOODS();

public:
	enum { IDD = IDD_ADM_GOODS };
#ifdef _DEBUG
	virtual void AssertValid() const;
#ifndef _WIN32_WCE
	virtual void Dump(CDumpContext& dc) const;
#endif
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};


