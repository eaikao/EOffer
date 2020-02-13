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