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
	std::string str;								//存储用变量
	std::string WTS(const std::wstring & wstr);		//wstring转string
	std::wstring STW(const std::string & str);		//string转wstring
	std::string SUBSTR(int start, int stop);		//取子串
	std::string SUBSTR(std::string src, int start, int stop);
	bool ISDEC(char c);								//判断是否为合法十进制数字串
	bool ISHEX(char c);								//判断是否为合法十六进制数字串
	int tint(char c);								//字符转数字
	void swap(int &var1, int &var2);				//交换两数
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
	//构造与析构

	UString();										//默认无参构造函数
	UString(const UString &ustr);					//UString复制构造
	UString(std::string s);							//从string构造
	UString(std::wstring ws);						//从wstring构造
	UString(char* cs);								//从C字符串构造
	UString(const char* ccs);						//从C字符串构造2
	UString(wchar_t* ws);							//从UNICODE下的C字符串构造
	UString(const wchar_t* cws);					//从UNICODE下的C字符串构造2
	UString(const char chr);						//从普通字符构造
	UString(const wchar_t wch);						//从UNICODE字符构造
	~UString();										//析构
	//字符串转换

	std::string std_str();							//转换为string
	const char* c_str();							//转换为C字符串
	char* c_str_nc();								//转换为非常量C字符串
	std::wstring w_str();							//转换为wstring
	const wchar_t* wc_str();						//转换为UNICODE下C字符串
	wchar_t* w_str_nc();							//转换为UNICODE下非常量C字符串
	char bit_c(int bit);							//取某一位字符，相当于[bit]
	wchar_t bit_w(int bit);							//以UNICODE格式取某一位字符
	//字符串信息

	int length();									//获取字串长度
	//字符串操作

	int Find(char c);								//在串中寻找一个字符并返回它的位置
	int Find(wchar_t wc);							//在串中寻找一个UNICODE字符并返回它的位置
	int Find(UString s);							//在串中寻找一个string子串并返回位置
	std::string substr(int start, int stop);		//取出从start到stop的子串并以string类型返回
	std::wstring substr_w(int start, int stop);		//取出从start到stop的子串并以wstring类型返回
	bool Erase(int poi);							//删除poi处的字符
	bool Erase(int start, int stop);				//删除从start到stop的所有字符
	void Format(UString cmd, ...);					//格式化字符串
	void Random(int bits, UString STRUCT);			//生成一个随机字符串
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
	void Go_away_0x();								//去除十六进制数字串开头的“0x”
	int to_int_dec();								//转换为int（按十进制转换）
	int to_int_hex();								//转换为int（按十六进制转换）
	long long to_int_dec_ll();						//转换为long long（按十进制转换）
	long long to_int_hex_ll();						//转换为long long（按十六进制转换）
	double to_double();								//转换为double
	//运算符
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