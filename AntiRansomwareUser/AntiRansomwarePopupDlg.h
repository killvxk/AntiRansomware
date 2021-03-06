#pragma once

#include "afxcmn.h"
#include "AntiRansomwareTable.h"

// CAntiRansomwarePopupDlg 대화 상자입니다.

class CAntiRansomwarePopupDlg : public CDialog
{
	DECLARE_DYNAMIC(CAntiRansomwarePopupDlg)

public:
	CAntiRansomwarePopupDlg(CWnd* pParent = NULL);   // 표준 생성자입니다.
	virtual ~CAntiRansomwarePopupDlg();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ANTIRANSOMWAREPOPUPDLG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	int m_typePopup;
	CBitmap m_background;
	CFont m_fontTitle;
	CFont m_fontMessage;

	ITEM_POPUP_MESSAGE *m_pPopupMessage;

// Anti-Ransomware Popup
public:
	DECLARE_MESSAGE_MAP()
	virtual BOOL OnInitDialog();
	afx_msg BOOL OnEraseBkgnd(CDC* pDC);
public:
	void InitPopupWindow(ITEM_POPUP_MESSAGE &sItem);

	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnClose();
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
	afx_msg void OnDestroy();
	CLinkCtrl ctr_linkProcPath;
	afx_msg void OnBnClickedButtonYes();
	afx_msg void OnBnClickedButtonNo();
};
