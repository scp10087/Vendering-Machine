#pragma once



// ADM_GOODS 窗体视图

class ADM_GOODS : public CFormView
{
	DECLARE_DYNCREATE(ADM_GOODS)

protected:
	ADM_GOODS();           // 动态创建所使用的受保护的构造函数
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
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};


