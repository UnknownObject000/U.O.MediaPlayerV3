#include "UString.h"

std::string UString::WTS(const std::wstring & wstr)
{
	std::string ret;
	try {
		std::wstring_convert< std::codecvt_utf8<wchar_t> > wcv;
		ret = wcv.to_bytes(wstr);
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	return ret;
}

std::wstring UString::STW(const std::string & str)
{
	std::wstring ret;
	try {
		std::wstring_convert< std::codecvt_utf8<wchar_t> > wcv;
		ret = wcv.from_bytes(str);
	}
	catch (const std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	return ret;
}

std::string UString::SUBSTR(int start, int stop)
{
	if (start > stop)
	{
		return "null";
	}
	if ((stop - start) > length())
	{
		return "overload";
	}
	char* tmp = new char[length()];
	for (int i = start; i <= stop; i++)
	{
		tmp[i - start] = str[i];
	}
	tmp[(stop - start) + 2] = '\0';
	std::string ret = std::string(tmp);
	delete[] tmp;
	return ret;
}

std::string UString::SUBSTR(std::string src, int start, int stop)
{
	if (start > stop)
	{
		return "null";
	}
	if ((stop - start) > src.length())
	{
		return "overload";
	}
	char* tmp = new char[src.length()];
	for (int i = start; i <= stop; i++)
	{
		tmp[i - start] = src[i];
	}
	tmp[(stop - start) + 2] = '\0';
	std::string ret = std::string(tmp);
	delete[] tmp;
	return ret;
}

bool UString::ISDEC(char c)
{
	if (c >= '0'&& c <= '9')
		return true;
	else return false;
}

bool UString::ISHEX(char c)
{
	if (ISDEC(c))
		return true;
	else
	{
		if (c >= 'A'&& c <= 'F')
			return true;
		else if (c >= 'a'&& c <= 'f')
			return true;
		else return false;
	}
}

int UString::tint(char c)
{
	if (ISDEC(c))
		return (c - '0');
	else
	{
		if (c == 'A' || c == 'a')
			return 10;
		if (c == 'B' || c == 'b')
			return 11;
		if (c == 'C' || c == 'c')
			return 12;
		if (c == 'D' || c == 'd')
			return 13;
		if (c == 'E' || c == 'e')
			return 14;
		if (c == 'F' || c == 'f')
			return 15;
	}
}

void UString::swap(int &var1, int &var2)
{
	int tmp = var1;
	var1 = var2;
	var2 = tmp;
	return;
}

void UString::mapchar(wchar_t &wc, mapobj mo)
{
	std::wstring upper = L"ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	std::wstring lower = L"abcdefghijklmnopqrstuvwxyz";
	if (mo == Upper)
	{

		for (int i = 0; i < 26; i++)
		{
			if (wc == lower[i])
			{
				wc = upper[i];
				break;
			}
		}
	}
	else if (mo == Lower)
	{
		for (int i = 0; i < 26; i++)
		{
			if (wc == upper[i])
			{
				wc = lower[i];
				break;
			}
		}
	}
	return;
}

//build & unbuild
UString::UString()
{
	str = "";
}

UString::UString(const UString &ustr)
{
	str = ustr.str;
}

UString::UString(std::string s)
{
	str = s;
}

UString::UString(std::wstring ws)
{
	str = WTS(ws);
}

UString::UString(char* cs)
{
	str = std::string(cs);
}

UString::UString(const char* ccs)
{
	str = std::string(ccs);
}

UString::UString(wchar_t* ws)
{
	str = WTS(std::wstring(ws));
}

UString::UString(const wchar_t* cws)
{
	str = WTS(std::wstring(cws));
}

UString::UString(const char chr)
{
	char cg[2];
	cg[0] = chr;
	cg[1] = '\0';
	str = std::string(cg);
}

UString::UString(const wchar_t wch)
{
	wchar_t wg[2];
	wg[0] = wch;
	wg[1] = L'\0';
	str = WTS(std::wstring(wg));
}

UString::~UString()
{
	str.~basic_string();
}

//string etc...
std::string UString::std_str()
{
	return str;
}

const char* UString::c_str()
{
	return str.c_str();
}

char* UString::c_str_nc()
{
	const char* cstr = str.c_str();
	char* ncstr = new char[str.length()];
	for (int i = 0; i < str.length(); i++)
	{
		ncstr[i] = cstr[i];
	}
	char* ret = ncstr;
	delete[] ncstr;
	return ret;
}

std::wstring UString::w_str()
{
	return STW(str);
}

const wchar_t* UString::wc_str()
{
	return STW(str).c_str();
}

wchar_t* UString::w_str_nc()
{
	const wchar_t* cstr = STW(str).c_str();
	wchar_t* ncstr = new wchar_t[str.length()];
	for (int i = 0; i < str.length(); i++)
	{
		ncstr[i] = cstr[i];
	}
	wchar_t* ret = ncstr;
	delete[] ncstr;
	return ret;
}

char UString::bit_c(int bit)
{
	if (bit >= length())
	{
		throw("UString: Out of range");
		return 0;
	}
	return str[bit];
}

wchar_t UString::bit_w(int bit)
{
	if (bit >= length())
	{
		throw("UString: Out of range");
		return 0;
	}
	std::wstring wstr;
	wstr = STW(str);
	return wstr[bit];
}

//info
int UString::length()
{
	return str.length();
}

//opt
int UString::Find(char c)
{
	for (int i = 0; i < length(); i++)
	{
		if (str[i] == c)
			return i;
	}
	return -1;
}

int UString::Find(wchar_t wc)
{
	std::wstring tmp = STW(str);
	for (int i = 0; i < tmp.length(); i++)
	{
		if (tmp[i] == wc)
		{
			return i;
		}
	}
	return -1;
}

int UString::Find(UString s)
{
	if (length() < s.length())
		return -1;
	for (int i = 0; i < length(); i++)
	{
		if ((i + s.length()) > length())
		{
			return -1;
		}
		if (SUBSTR(i, i + s.length()) == s.std_str())
		{
			return i;
		}
	}
	return -1;
}

std::string UString::substr(int start, int stop)
{
	return SUBSTR(start, stop);
}

std::wstring UString::substr_w(int start, int stop)
{
	return STW(SUBSTR(start, stop));
}

bool UString::Erase(int poi)
{
	if (poi >= length()) return false;
	char* tmp = new char[length()];
	for (int i = 0; i < poi; i++)
	{
		tmp[i] = str[i];
	}
	for (int i = poi + 1; i < length(); i++)
	{
		tmp[i - 1] = str[i];
	}
	tmp[length() - 1] = '\0';
	str = tmp;
	delete[] tmp;
	return true;
}

bool UString::Erase(int start, int stop)
{
	if (start >= length()) return false;
	if (stop >= length()) return false;
	if (start > stop) swap(start, stop);
	char* tmp = new char[length() - (stop - start + 1) + 1];
	for (int i = 0; i < start; i++)
	{
		tmp[i] = str[i];
	}
	for (int i = stop + 1; i < length(); i++)
	{
		tmp[i - (stop - start + 1)] = str[i];
	}
	tmp[length() - (stop - start + 1)] = '\0';
	str = tmp;
	delete[] tmp;
	return true;
}

void UString::Format(UString cmd, ...)
{
	va_list vl,vt;
	char *tmp = new char[5];
	va_start(vt, cmd);
	va_start(vl, cmd);
	char *cstr = new char[vsprintf(tmp, cmd.c_str(), vl) + 5];
	va_end(vt);
	delete[] tmp;
	vsprintf(cstr, cmd.c_str(), vl);
	va_end(vl);
	str = std::string(cstr);
	delete[] cstr;
	return;
}

void UString::Random(int bits, UString STRUCT)
{
	int seed;
	UString ustr;
	seed = time(nullptr);
	for (int i = 0; i < bits; i++)
	{
		srand(seed);
		seed = (rand() % STRUCT.length());
		ustr += STRUCT.bit_c(seed);
	}
	if (ustr.length() == bits)
		str = ustr.std_str();
	else
		throw("UString: Unknown libary error");
	return;
}

void UString::Insert(char c, int pos)
{
	UString u1;
	u1 = UString(c);
	if (pos == 0)
	{
		str = u1.std_str() + str;
	}
	else if (pos == length())
	{
		str = str + u1.std_str();
	}
	else if (pos > 0 && pos < length())
	{
		str = SUBSTR(0, pos - 1) + u1.std_str() + SUBSTR(pos, length());
	}
	else
		throw("UString: out of range");
	return;
}

void UString::Insert(wchar_t w, int pos)
{
	UString u1;
	u1 = UString(w);
	if (pos == 0)
	{
		str = u1.std_str() + str;
	}
	else if (pos == length())
	{
		str = str + u1.std_str();
	}
	else if (pos > 0 && pos < length())
	{
		str = SUBSTR(0, pos - 1) + u1.std_str() + SUBSTR(pos, length());
	}
	else
		throw("UString: out of range");
	return;

}

void UString::Insert(UString ustr, int pos)
{
	UString u1;
	u1 = UString(ustr);
	if (pos == 0)
	{
		str = u1.std_str() + str;
	}
	else if (pos == length())
	{
		str = str + u1.std_str();
	}
	else if (pos > 0 && pos < length())
	{
		str = SUBSTR(0, pos - 1) + u1.std_str() + SUBSTR(pos, length());
	}
	else
		throw("UString: out of range");
	return;

}

void UString::AllUpperCase()
{
	std::wstring wstr = STW(str);
	for (int i = 0; i < length(); i++)
	{
		if (wstr[i] >= L'a' && wstr[i] <= L'z')
		{
			mapchar(wstr[i], Upper);
		}
	}
	str = WTS(wstr);
	return;
}

void UString::AllLowerCase()
{
	std::wstring wstr = STW(str);
	for (int i = 0; i < length(); i++)
	{
		if (wstr[i] >= L'A' && wstr[i] <= L'Z')
		{
			mapchar(wstr[i], Lower);
		}
	}
	str = WTS(wstr);
	return;

}

void UString::UpsideDown()
{
	std::wstring wstr = STW(str);
	for (int i = 0; i < length(); i++)
	{
		if (wstr[i] >= L'a' && wstr[i] <= L'z')
		{
			mapchar(wstr[i], Upper);
		}
		else if (wstr[i] >= L'A' && wstr[i] <= L'Z')
		{
			mapchar(wstr[i], Lower);
		}
	}
	str = WTS(wstr);
	return;

}

void UString::reverse()
{
	std::wstring wstr = STW(str);
	wchar_t* rev = new wchar_t[length()];
	for (int i = length() - 1; i <= 0; i--)
	{
		rev[(length() - 1) - i] = wstr[i];
	}
	wstr = std::wstring(rev);
	delete[] rev;
	str = WTS(wstr);
	return;
}

void UString::TrimStart()
{
	int nbsp = 0;
	std::wstring wstr = STW(str);
	for (int i = 0; i < length(); i++)
	{
		if (wstr[i] == L' ')
			nbsp++;
		else
			break;
	}
	if (nbsp > 0)
		Erase(0, nbsp);
	return;
}

void UString::TrimStart(UString ustr)
{
	int match = 0;
	std::wstring wstri = STW(ustr.std_str());
	std::wstring wstr = STW(ustr.std_str());
	for (int i = 0; i < length(); i++)
	{
		for (int j = 0; j < wstri.length(); j++)
		{
			if (wstr[i] == wstri[j])
			{
				match++;
				break;
			}
		}
	}
	if (match > 0)
		Erase(0, match);
	return;
}

void UString::TrimEnd()
{
	reverse();
	TrimStart();
	reverse();
	return;
}

void UString::TrimEnd(UString ustr)
{
	reverse();
	TrimStart(ustr);
	reverse();
	return;
}

void UString::Trim()
{
	TrimStart();
	TrimEnd();
	return;
}

void UString::Trim(UString ustr)
{
	TrimStart(ustr);
	TrimEnd(ustr);
	return;
}

bool UString::legalstring(UString ustr)
{
	std::wstring ws = STW(str);
	for (int i = 0; i < length(); i++)
	{
		for (int j = 0; j < ustr.length(); j++)
		{
			if (ws[i] == ustr.bit_w(j))
				break;
			else if (j == (ustr.length() - 1))
				return false;
		}
	}
	return true;
}

bool UString::legalstring(int num)
{
	if (length() == num)
		return true;
	else return false;
}

bool UString::legalstring(int num, UString ustr)
{
	return (legalstring(num) && legalstring(ustr));
}

void UString::Go_away_0x()
{
	if ((str[0] == '0') && (str[1] == 'x'))
	{
		Erase(0, 1);
	}
}

int UString::to_int_dec()
{
	int ret = 0;
	for (int i = 0; i < length(); i++)
	{
		if (!ISDEC(str[i]))
			return INF;
	}
	int len = length();
	for (int i = 0; i < len; i++)
	{
		ret = ret + (tint(str[i]) * (len - i - 1) * 10);
	}
	return ret;
}

int UString::to_int_hex()
{
	int ret = 0;
	for (int i = 0; i < length(); i++)
	{
		if (!ISHEX(str[i]))
			return INF;
	}
	int len = length();
	for (int i = 0; i < len; i++)
	{
		ret = ret + (tint(str[i]) * (len - i - 1) * 16);
	}
	return ret;
}

long long UString::to_int_dec_ll()
{
	long long ret = 0;
	for (int i = 0; i < length(); i++)
	{
		if (!ISDEC(str[i]))
			return INF;
	}
	int len = length();
	for (int i = 0; i < len; i++)
	{
		ret = ret + (tint(str[i]) * (len - i - 1) * 10);
	}
	return ret;
}

long long UString::to_int_hex_ll()
{
	long long ret = 0;
	for (int i = 0; i < length(); i++)
	{
		if (!ISHEX(str[i]))
			return INF;
	}
	int len = length();
	for (int i = 0; i < len; i++)
	{
		ret = ret + (tint(str[i]) * (len - i - 1) * 16);
	}
	return ret;
}

double UString::to_double()
{
	double ret = 0.00;
	ret = atof(str.c_str());
	return ret;
}

//operation
//+
UString UString::operator+(const UString &ustr)
{
	str = str + ustr.str;
	return UString(str);
}

UString UString::operator+(const std::string &sstr)
{
	str = str + sstr;
	return UString(str);
}

UString UString::operator+(const std::wstring &wstr)
{
	str = str + WTS(wstr);
	return UString(str);
}

UString UString::operator+(const char* &cstr)
{
	str = str + std::string(cstr);
	return UString(str);
}

UString UString::operator+(const wchar_t* &wcstr)
{
	str = str + WTS(std::wstring(wcstr));
	return UString(str);
}

UString UString::operator+(const char &chr)
{
	str = str + UString(chr).std_str();
	return UString(str);
}

UString UString::operator+(const wchar_t &wch)
{
	str = str + UString(wch).std_str();
	return UString(str);
}

//+=
void UString::operator+=(const UString &ustr)
{
	str = str + ustr.str;
	return;
}

void UString::operator+=(const std::string &sstr)
{
	str = str + sstr;
	return;
}

void UString::operator+=(const std::wstring &wstr)
{
	str = str + WTS(wstr);
	return;
}

void UString::operator+=(const char* &cstr)
{
	str = str + std::string(cstr);
	return;
}

void UString::operator+=(const wchar_t* &wcstr)
{
	str = str + WTS(std::wstring(wcstr));
	return;
}

void UString::operator+=(const char &chr)
{
	std::string tmp = UString(chr).std_str();
	str += tmp;
	return;
}

void UString::operator+=(const wchar_t &wch)
{
	std::string tmp = WTS(std::wstring(UString(wch).w_str()));
	str += tmp;
	return;
}

//=
void UString::operator=(const UString &ustr)
{
	str = ustr.str;
	return;
}

void UString::operator=(const std::string &sstr)
{
	str = sstr;
	return;
}

void UString::operator=(const std::wstring &wstr)
{
	str = WTS(wstr);
	return;
}

void UString::operator=(const char* &cstr)
{
	str = std::string(cstr);
	return;
}

void UString::operator=(const wchar_t* &wcstr)
{
	str = WTS(std::wstring(wcstr));
	return;
}

void UString::operator=(const char & chr)
{
	str = UString(chr).std_str();
	return;
}

void UString::operator=(const wchar_t & wch)
{
	str = UString(wch).std_str();
	return;
}

//==
bool UString::operator==(const UString &ustr)
{
	if (str == ustr.str)
		return true;
	else return false;
}

bool UString::operator==(const std::string &sstr)
{
	if (str == sstr)
		return true;
	else return false;
}

bool UString::operator==(const std::wstring &wstr)
{
	if (str == WTS(wstr))
		return true;
	else return false;
}

bool UString::operator==(const char* &cstr)
{
	if (str == std::string(cstr))
		return true;
	else return false;
}

bool UString::operator==(const wchar_t* &wcstr)
{
	if (str == WTS(std::wstring(wcstr)))
		return true;
	else return false;
}
//!=

bool UString::operator!=(const UString &ustr)
{
	if (str != ustr.str)
		return true;
	else return false;
}

bool UString::operator!=(const std::string &sstr)
{
	if (str != sstr)
		return true;
	else return false;
}

bool UString::operator!=(const std::wstring &wstr)
{
	if (str != WTS(wstr))
		return true;
	else return false;
}

bool UString::operator!=(const char* &cstr)
{
	if (str != std::string(cstr))
		return true;
	else return false;
}

bool UString::operator!=(const wchar_t* &wcstr)
{
	if (str != WTS(std::wstring(wcstr)))
		return true;
	else return false;
}

char &UString::operator[](size_t _Off)
{
	return str[_Off];
}

//static function

std::string UString::to_string(std::wstring unic)
{
	std::string ret;
	try {
		std::wstring_convert< std::codecvt_utf8<wchar_t> > wcv;
		ret = wcv.to_bytes(unic);
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	return ret;
}

std::wstring UString::to_wstring(std::string mbcs)
{
	std::wstring ret;
	try {
		std::wstring_convert< std::codecvt_utf8<wchar_t> > wcv;
		ret = wcv.from_bytes(mbcs);
	}
	catch (const std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	return ret;
}

const char * UString::to_cstr(std::string str)
{
	return str.c_str();
}

const char * UString::to_cstr(std::wstring wstr)
{
	return to_string(wstr).c_str();
}

const wchar_t * UString::to_wcstr(std::string str)
{
	return to_wstring(str).c_str();
}

const wchar_t * UString::to_wcstr(std::wstring wstr)
{
	return wstr.c_str();
}

UString::tstring UString::STR(astring str)
{
#ifdef _UNICODE
	return to_wstring(str);
#else
	return to_string(str);
#endif
}

UString::tstring UString::STR(tstring str)
{
	return str;
}

UString UString::Format_(UString cmd, ...)
{
	va_list vl, vt;
	char *tmp = new char[5];
	va_start(vt, cmd);
	va_start(vl, cmd);
	char *cstr = new char[vsprintf(tmp, cmd.c_str(), vl) + 5];
	va_end(vt);
	delete[] tmp;
	vsprintf(cstr, cmd.c_str(), vl);
	va_end(vl);
	UString str = std::string(cstr);
	delete[] cstr;
	return str;
}

bool UString::IsUpper(char c)
{
	if (c >= 'A' && c <= 'Z')
		return true;
	else return false;
}

bool UString::IsUpper(wchar_t w)
{
	if (w >= L'A' && w <= L'Z')
		return true;
	else return false;
}

bool UString::IsLower(char c)
{
	if (c >= 'a' && c <= 'z')
		return true;
	else return false;
}

bool UString::IsLower(wchar_t w)
{
	if (w >= L'a' && w <= L'z')
		return true;
	else return false;
}

bool UString::LegalString(UString obj, UString chk)
{
	std::wstring ws = to_wstring(obj.std_str());
	std::wstring wstr = to_wstring(chk.std_str());
	for (int i = 0; i < ws.length(); i++)
	{
		for (int j = 0; j < wstr.length(); j++)
		{
			if (ws[i] == wstr[j])
				break;
			else if (j == (wstr.length() - 1))
				return false;
		}
	}
	return true;
}

bool UString::LegalString(UString obj, int num)
{
	if (obj.length() == num)
		return true;
	else return false;
}

bool UString::LegalString(UString obj, int num, UString chk)
{
	return (LegalString(obj, num) && LegalString(obj, chk));
}

//<<
std::ostream &operator<< (std::ostream& ostr, UString& ustr)
{
	ostr << ustr.std_str();
	return ostr;
}

//>>
std::istream &operator>> (std::istream& istr, UString& ustr)
{
	std::string tmp;
	istr >> tmp;
	ustr = tmp;
	return istr;
}