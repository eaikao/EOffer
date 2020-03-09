/*******************************
** 作者： 	非正经程序员
** csdn：	非正经程序员
** 公众号：	非正经码农
** 描述：	无
**Copyright ©2020 非正经程序员版权所有
*******************************/

class EMyString {
public:
	EMyString(const char* pData = nullptr, int nLen = 0);
	EMyString(const EMyString& str);
	~EMyString ();

	EMyString& operator = (const EMyString& str);

	const char* cstr() const;
	int Len()  const { return m_nLen; }
private:
	char* m_pData;
	int	  m_nLen;
};