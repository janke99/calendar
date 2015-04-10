
// QQPCMgrDlg.h : ͷ�ļ�
//

#pragma once
#include "afxwin.h"
#include "afxcmn.h"

#include "./UI/IceDUI.h"

// CQQPCMgrDlg �Ի���
class CQQPCMgrDlg : public CDlgBase
{
	UINT	m_uTimerTest;
	UINT	m_uTimerTestWeb;


	int m_nWebSit;
	int m_nVirus;
	int m_nScore;
	int m_nProgress;

	// ����
public:
	
	CQQPCMgrDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_LINK_LOOK_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg HCURSOR OnQueryDragIcon();

	DECLARE_MESSAGE_MAP()

	virtual void InitUI(CRect rcClient);
	virtual void OnSize(CRect rcClient);

	// ��Ϣ��Ӧ
	virtual LRESULT OnMessage(UINT	uID, UINT Msg, WPARAM wParam, LPARAM lParam);

	// ����
	afx_msg LRESULT OnMessageSkin(WPARAM wParam, LPARAM lParam);
	// ���˵�
	afx_msg LRESULT OnMessageMainMenu(WPARAM wParam, LPARAM lParam);

	// ɨ��
	void StartCan(int nType);
		
public:

	// ��ʱ����Ϣ
	virtual void OnTimer(UINT uTimerID);
};
