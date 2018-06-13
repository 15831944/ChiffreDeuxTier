// chiffredeuxtier.h : main header file for the CHIFFREDEUXTIER application
//

#if !defined(AFX_CHIFFREDEUXTIER_H__37E9B37D_3276_49D6_B0B1_FAC14F5BAEFC__INCLUDED_)
#define AFX_CHIFFREDEUXTIER_H__37E9B37D_3276_49D6_B0B1_FAC14F5BAEFC__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CChiffredeuxtierApp:
// See chiffredeuxtier.cpp for the implementation of this class
//

class CChiffredeuxtierApp : public CWinApp
{
public:
	CChiffredeuxtierApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CChiffredeuxtierApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CChiffredeuxtierApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CHIFFREDEUXTIER_H__37E9B37D_3276_49D6_B0B1_FAC14F5BAEFC__INCLUDED_)
