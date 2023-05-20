
// MFCApplicationDlg.h : header file
//
#include <memory>
#pragma once

class WinFormsControlHost;
// CMFCApplicationDlg dialog
class CMFCApplicationDlg : public CDialogEx
{
	std::shared_ptr<WinFormsControlHost> m_winFormsControlHost;
	//CWinFormsControl<ManagedLibrary::UserControl1> m_ctrl1;
// Construction
public:
	CMFCApplicationDlg(CWnd* pParent = nullptr);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFCAPPLICATION_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
    afx_msg void OnBnClickedButtonShowWinui();
	afx_msg void OnBnClickedButton1();
};
