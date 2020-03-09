/*******************************
** 作者： 	非正经程序员
** csdn：	https://blog.csdn.net/u012058778
** 公众号：	非正经码农
** 描述：	无
**Copyright ©2020 非正经程序员版权所有
*******************************/

#pragma once
#include "EMacro.h"

template <typename T>
class ESingleton {
public:
	static T* GetInstance();
	static void ReleaseInstance();

protected:
	ESingleton() {}
	virtual ~ESingleton() {}

private:
	ESingleton(const ESingleton<T>& other);
	ESingleton<T>& operator=(const ESingleton<T>& other);

private:
	static T*		m_pInstance;
	static IRWMutex	m_Mutex;
};

template <typename T>
IRWMutex ESingleton<T>::m_Mutex;

template <typename T>
T* ESingleton<T>::m_pInstance = NULL;

template <typename T>
T* ESingleton<T>::GetInstance() {
	if (m_pInstance != NULL) {
		return m_pInstance;
	}

	m_Mutex.lock();
	if (m_pInstance == NULL) {
		m_pInstance = new T();
	}
	m_Mutex.unlock();

	return m_pInstance;
}

template <typename T>
void ESingleton<T>::ReleaseInstance() {
	if (m_pInstance != NULL) {
		m_Mutex.lock();
		RELEASE_POINTER(m_pInstance);
		m_Mutex.unlock();
	}
}


