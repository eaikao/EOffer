#include<stdio.h>
#include <string>
#include "EMyString.h"
#include "EFormatManual.h"
#include "EFormatFactory.h"
#include "EMacro.h"

void TestMyString() {
	char pEStr[5] = { 'h', 'e', 'l', 'l', 'o' };
	EMyString str(pEStr, sizeof(pEStr));

	EMyString str1;
	str1 = str;
	std::string cstring(str1.cstr(), 5);
	printf("%s\n", str1.cstr());
}

int main(int argc, char** argv) {
	EFormatManual::GetInstance()->Print(1, "EMyString");
	EFormatFactory pImgFactory;
	pImgFactory.RegisterCmd(1, (void*)&TestMyString);
	pImgFactory.ExecCmd();
	return 0;
}