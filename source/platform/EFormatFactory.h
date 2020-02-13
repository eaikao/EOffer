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