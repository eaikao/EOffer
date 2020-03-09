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
#include "ESingleton.h"

class EFormatManual : public ESingleton<EFormatManual> {
	friend class ESingleton<EFormatManual>;
public:
	void Print(int nCount, ...);
protected:
	EFormatManual() {}
	~EFormatManual(){}
private:

};