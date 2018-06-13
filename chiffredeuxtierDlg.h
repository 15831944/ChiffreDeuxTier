// chiffredeuxtierDlg.h : header file
//

#if !defined(AFX_CHIFFREDEUXTIERDLG_H__5138D981_2D3E_4954_99DE_21E2999169F5__INCLUDED_)
#define AFX_CHIFFREDEUXTIERDLG_H__5138D981_2D3E_4954_99DE_21E2999169F5__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CChiffredeuxtierDlg dialog

class CChiffredeuxtierDlg : public CDialog
{
// Construction
public:
	CChiffredeuxtierDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CChiffredeuxtierDlg)
	enum { IDD = IDD_CHIFFREDEUXTIER_DIALOG };
	int		m_nIn;
	int		m_nOutHalf;
	int		m_nOutTwoTier;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CChiffredeuxtierDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CChiffredeuxtierDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnChangeIn();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CHIFFREDEUXTIERDLG_H__5138D981_2D3E_4954_99DE_21E2999169F5__INCLUDED_)
