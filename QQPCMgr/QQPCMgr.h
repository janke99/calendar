
// QQPCMgr.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CQQPCMgrApp:
// �йش����ʵ�֣������ QQPCMgr.cpp
//

class CQQPCMgrApp : public CWinApp
{
public:
	CQQPCMgrApp();

// ��д
	public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CQQPCMgrApp theApp;