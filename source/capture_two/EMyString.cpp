#include "EMyString.h"
#include <string.h>

EMyString::EMyString(const char* pData, int nLen)
	: m_pData(nullptr)
	, m_nLen(0) {
	if (pData != nullptr && nLen != 0) {
		m_pData = new char[nLen];
		m_nLen = nLen;
		memcpy(m_pData, pData, m_nLen);
	}
}

EMyString::EMyString(const EMyString& str)
	: m_pData(nullptr) {
	m_nLen = str.Len();
	m_pData = new char[m_nLen];
	memcpy(m_pData, str.m_pData, m_nLen);
}

EMyString::~EMyString() {
	delete[] m_pData;
	m_pData = nullptr;
}

const char* EMyString::cstr() const {
	return m_pData;
}

#ifdef OPTIMIZATION_EMSTRING
const EMyString& EMyString::operator=(const EMyString& str) {
	if (this != &str) {
		EMyString strTmp(str);
		char* tempData = strTmp.m_pData;
		strTmp.m_pData = m_pData;				//作用域之后调用析构释放
		m_pData = tempData;						//tempData是在EMyString构造函数中申请的内存
	}

	return *this;
}
#else
EMyString& EMyString::operator = (const EMyString& str) {
	if (this == &str) {
		return *this;
	}

	delete[] m_pData;
	m_pData = nullptr;
	m_nLen = str.Len();
	m_pData = new char[m_nLen];
	memcpy(m_pData, str.m_pData, m_nLen);
	return *this;
}
#endif

