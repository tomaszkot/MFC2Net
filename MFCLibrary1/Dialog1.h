#pragma once
#include "pch.h"
#include "Dialog1_API.h"
#include <memory>
// Dialog1 dialog

class WinFormsControlHost;

class  Dialog1 : public CDialog
{
	DECLARE_DYNAMIC(Dialog1)
		std::shared_ptr<WinFormsControlHost> m_winFormsControlHost;
public:
	OVPXMFCUICONTROLS_API Dialog1(CWnd* pParent = nullptr);   // standard constructor
	virtual ~Dialog1();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

	OVPXMFCUICONTROLS_API static void ShowDoModal();

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL OnInitDialog();
	afx_msg void OnBnClickedButtonShowForm();
};
