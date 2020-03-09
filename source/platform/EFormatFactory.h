/*******************************
** 作者： 	非正经程序员
** csdn：	https://blog.csdn.net/u012058778
** 公众号：	非正经码农
** 描述：	无
**Copyright ©2020 非正经程序员版权所有
*******************************/
#pragma once

#include <stdio.h>
#include <stdarg.h>
#include "EImageDef.h"

class EFormatFactory {
public:
	EFormatFactory();
	~EFormatFactory();

	void RegisterCmd(int nCount, ...);
	void ExecCmd();
private:
	void (*m_pCmd[MANUAL_MAX_SIZE])();
	int	 m_nCmdCount;
};