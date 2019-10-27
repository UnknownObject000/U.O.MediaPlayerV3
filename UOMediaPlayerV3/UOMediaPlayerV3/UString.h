#pragma once

#include <iostream>
#include <stdarg.h>
#include <string.h>
#include <codecvt>
#include <string>
#include <time.h>

#define INF 0x7ffffff

class UString
{
private:
	enum mapobj
	{
		Upper = 56739,
		Lower = 28684
	};
private:
	std::string str;								//�洢�ñ���
	std::string WTS(const std::wstring & wstr);		//wstringתstring
	std::wstring STW(const std::string & str);		//stringתwstring
	std::string SUBSTR(int start, int stop);		//ȡ�Ӵ�
	std::string SUBSTR(std::string src, int start, int stop);
	bool ISDEC(char c);								//�ж��Ƿ�Ϊ�Ϸ�ʮ�������ִ�
	bool ISHEX(char c);								//�ж��Ƿ�Ϊ�Ϸ�ʮ���������ִ�
	int tint(char c);								//�ַ�ת����
	void swap(int &var1, int &var2);				//��������
	void mapchar(wchar_t &wc, mapobj mo);
public:
#ifdef _UNICODE
	typedef std::wstring tstring;
	typedef std::string astring;
#else
	typedef std::string tstring;
	typedef std::wstring astring;
#endif
public:
	//����������

	UString();										//Ĭ���޲ι��캯��
	UString(const UString &ustr);					//UString���ƹ���
	UString(std::string s);							//��string����
	UString(std::wstring ws);						//��wstring����
	UString(char* cs);								//��C�ַ�������
	UString(const char* ccs);						//��C�ַ�������2
	UString(wchar_t* ws);							//��UNICODE�µ�C�ַ�������
	UString(const wchar_t* cws);					//��UNICODE�µ�C�ַ�������2
	UString(const char chr);						//����ͨ�ַ�����
	UString(const wchar_t wch);						//��UNICODE�ַ�����
	~UString();										//����
	//�ַ���ת��

	std::string std_str();							//ת��Ϊstring
	const char* c_str();							//ת��ΪC�ַ���
	char* c_str_nc();								//ת��Ϊ�ǳ���C�ַ���
	std::wstring w_str();							//ת��Ϊwstring
	const wchar_t* wc_str();						//ת��ΪUNICODE��C�ַ���
	wchar_t* w_str_nc();							//ת��ΪUNICODE�·ǳ���C�ַ���
	char bit_c(int bit);							//ȡĳһλ�ַ����൱��[bit]
	wchar_t bit_w(int bit);							//��UNICODE��ʽȡĳһλ�ַ�
	//�ַ�����Ϣ

	int length();									//��ȡ�ִ�����
	//�ַ�������

	int Find(char c);								//�ڴ���Ѱ��һ���ַ�����������λ��
	int Find(wchar_t wc);							//�ڴ���Ѱ��һ��UNICODE�ַ�����������λ��
	int Find(UString s);							//�ڴ���Ѱ��һ��string�Ӵ�������λ��
	std::string substr(int start, int stop);		//ȡ����start��stop���Ӵ�����string���ͷ���
	std::wstring substr_w(int start, int stop);		//ȡ����start��stop���Ӵ�����wstring���ͷ���
	bool Erase(int poi);							//ɾ��poi�����ַ�
	bool Erase(int start, int stop);				//ɾ����start��stop�������ַ�
	void Format(UString cmd, ...);					//��ʽ���ַ���
	void Random(int bits, UString STRUCT);			//����һ������ַ���
	void Insert(char c, int pos);
	void Insert(wchar_t w, int pos);
	void Insert(UString ustr, int pos);
	void AllUpperCase();
	void AllLowerCase();
	void UpsideDown();
	void reverse();
	void TrimStart();
	void TrimStart(UString ustr);
	void TrimEnd();
	void TrimEnd(UString ustr);
	void Trim();
	void Trim(UString ustr);
	bool legalstring(UString ustr);
	bool legalstring(int num);
	bool legalstring(int num, UString ustr);
	void Go_away_0x();								//ȥ��ʮ���������ִ���ͷ�ġ�0x��
	int to_int_dec();								//ת��Ϊint����ʮ����ת����
	int to_int_hex();								//ת��Ϊint����ʮ������ת����
	long long to_int_dec_ll();						//ת��Ϊlong long����ʮ����ת����
	long long to_int_hex_ll();						//ת��Ϊlong long����ʮ������ת����
	double to_double();								//ת��Ϊdouble
	//�����
	//+

	UString operator+(const UString &ustr);
	UString operator+(const std::string &sstr);
	UString operator+(const std::wstring &wstr);
	UString operator+(const char* &cstr);
	UString operator+(const wchar_t* &wcstr);
	UString operator+(const char &chr);
	UString operator+(const wchar_t &wch);
	//+=

	void operator+=(const UString &ustr);
	void operator+=(const std::string &sstr);
	void operator+=(const std::wstring &wstr);
	void operator+=(const char* &cstr);
	void operator+=(const wchar_t* &wcstr);
	void operator+=(const char &chr);
	void operator+=(const wchar_t &wch);
	//=

	void operator=(const char* &cstr);
	void operator=(const wchar_t* &wcstr);
	void operator=(const UString &ustr);
	void operator=(const std::string &sstr);
	void operator=(const std::wstring &wstr);
	void operator=(const char &chr);
	void operator=(const wchar_t &wch);
	//==

	bool operator==(const UString &ustr);
	bool operator==(const std::string &sstr);
	bool operator==(const std::wstring &wstr);
	bool operator==(const char* &cstr);
	bool operator==(const wchar_t* &wcstr);
	//!=

	bool operator!=(const UString &ustr);
	bool operator!=(const std::string &sstr);
	bool operator!=(const std::wstring &wstr);
	bool operator!=(const char* &cstr);
	bool operator!=(const wchar_t* &wcstr);

	char &operator[](size_t _Off);

public:
	static std::string to_string(std::wstring unic);
	static std::wstring to_wstring(std::string mbcs);
	static const char* to_cstr(std::string str);
	static const char* to_cstr(std::wstring wstr);
	static const wchar_t* to_wcstr(std::string str);
	static const wchar_t* to_wcstr(std::wstring wstr);
	static tstring STR(astring str);
	static tstring STR(tstring str);
	static UString Format_(UString cmd, ...);
	static bool IsUpper(char c);
	static bool IsUpper(wchar_t w);
	static bool IsLower(char c);
	static bool IsLower(wchar_t w);
	static bool LegalString(UString obj, int num);
	static bool LegalString(UString obj, UString chk);
	static bool LegalString(UString obj, int num, UString chk);
};

//<<
std::ostream &operator<< (std::ostream& ostr, UString& ustr);
//>>
std::istream &operator>> (std::istream& istr, UString& ustr);