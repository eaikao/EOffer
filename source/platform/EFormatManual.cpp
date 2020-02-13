#include "EFormatManual.h"
#include "EImageDef.h"
#include <string>

void EFormatManual::Print(int nCount, ...) {
	printf("command description: \n");
	va_list args;
	va_start(args, nCount);
	for (int i = 0; i < nCount; ++i) {
		char* strArg = va_arg(args, char*);
		printf("		%d: %s\n", i + 1, strArg);
	}
	va_end(args);
}
