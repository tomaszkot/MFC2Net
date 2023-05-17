// Dialog1.cpp : implementation file
//

#include "pch.h"
#include "MFCLibrary1.h"
#include "Dialog1.h"
#include "afxdialogex.h"


// Dialog1 dialog

IMPLEMENT_DYNAMIC(Dialog1, CDialog)

Dialog1::Dialog1(CWnd* pParent /*=nullptr*/)
	: CDialog(IDD_DIALOG1, pParent)
{

}

Dialog1::~Dialog1()
{
}

void Dialog1::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_ManagedControl(pDX, IDC_STATIC_PH_FORMS, m_ctrl1);
}


BEGIN_MESSAGE_MAP(Dialog1, CDialog)
	ON_BN_CLICKED(IDC_BUTTON_SHOW_FORM, &Dialog1::OnBnClickedButtonShowForm)
END_MESSAGE_MAP()

void Dialog1::ShowDoModal()
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());
	Dialog1 dlg1;
	dlg1.DoModal();
}
// Dialog1 message handlers


BOOL Dialog1::OnInitDialog()
{
	CDialog::OnInitDialog();

	
	return TRUE;  // return TRUE unless you set the focus to a control
	// EXCEPTION: OCX Property Pages should return FALSE
}


void Dialog1::OnBnClickedButtonShowForm()
{
	// TODO:  Add extra initialization here
	//cppCli = new CppCliInterop();
	//cppCli->SetMessage((wchar_t*)L"Hello, from C++ dll\0");
	//cppCli->ShowForm();
	// TODO: Add your control notification handler code here
}
