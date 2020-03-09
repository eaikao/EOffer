/*******************************
** 作者： 	非正经程序员
** csdn：	非正经程序员
** 公众号：	非正经码农
** 描述：	无
**Copyright ©2020 非正经程序员版权所有
*******************************/

#pragma once
#include <cassert>
#include <mutex>
#include <thread>

#ifndef NULL
#define NULL = 0
#endif

#define RELEASE_POINTER(p)			\
	delete p;						\
	p = NULL;


#define RELEASE_POINTER_ARRAY(p)	\
	delete [] p;					\
	p = NULL;						\

#define EAssert(expr) std::assert(expr)

typedef std::mutex IRWMutex;
typedef std::unique_lock<IRWMutex> IUniqueLock;
typedef std::lock_guard<IRWMutex> IGuardLock;

#define ESSleep(time) std::this_thread::sleep_for(std::chrono::seconds(time))
#define EMSleep(time) std::this_thread::sleep_for(std::chrono::milliseconds(time))
#define EUSleep(time) std::this_thread::sleep_for(std::chrono::microseconds(time))

