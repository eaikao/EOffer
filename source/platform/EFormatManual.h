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