#include "EFormatFactory.h"

EFormatFactory::EFormatFactory()
	: m_nCmdCount(0) {

}

EFormatFactory::~EFormatFactory() {

}

void EFormatFactory::RegisterCmd(int nCount, ...) {
	va_list args;
	va_start(args, nCount);
	for (int i = 0; i < nCount; ++i) {
		void *p = va_arg(args, void*);
		m_pCmd[i] = reinterpret_cast<void(*)()>(p);
	}
	va_end(args);
	m_nCmdCount = nCount;
}

void EFormatFactory::ExecCmd() {
	int nCmd = 1;
	while (nCmd != 0) {
		printf("please input process command, end by 0:");
		scanf_s("%d", &nCmd);
		if (nCmd <= m_nCmdCount && nCmd > 0) {
			m_pCmd[nCmd - 1]();
		}
	}
}

