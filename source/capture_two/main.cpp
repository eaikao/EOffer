/*******************************
** 作者： 	非正经程序员
** csdn：	非正经程序员
** 公众号：	非正经码农
** 描述：	无
**Copyright ©2020 非正经程序员版权所有
*******************************/

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