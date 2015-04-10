// windemo.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <Windows.h>
#include "windemo.h"
using namespace std;

template <class T>
T tmin(T x,T y)
{ return(x<y)?x:y;}

template <class T>
class myClass{
public:
	void show(){
		cout<<p<<endl;
	}
	myClass(T n)
	{
		p=n;
	}
private:
	T p;
};

int _tmain(int argc, _TCHAR* argv[])
{
	LPCWSTR lpW = L".cpp";
	if (*lpW == L'')
		cout<<"dfgdg"<<endl;
	std::wstring str = L"111";
	//str = L"" + str;
	wchar_t buf[MAX_PATH+1] = {0};
	buf[0] = '"';
	::GetModuleFileNameW(0, &buf[1], MAX_PATH-1);
	std::wstring strPath = buf;
	strPath += L"\"";
	MessageBoxW(0, strPath.c_str(), NULL, MB_OK);
	mputest();
	system("PAUSE");
	return 0;
}