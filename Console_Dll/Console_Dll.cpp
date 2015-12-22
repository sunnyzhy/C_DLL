// Console_Dll.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <Windows.h>
#include <string>
#include <iostream>
using namespace std;

typedef void (*Print)(char *name);

int _tmain(int argc, _TCHAR* argv[])
{
	HINSTANCE hDll;
	hDll=LoadLibraryA("C_DLL.dll"); //加载动态链接库
	if(hDll==NULL)
	{
		cout<<"open dll failed"<<endl;
		system("PAUSE");
		return 0;
	}
	Print print;
	print=(Print)GetProcAddress(hDll,"Print");
	if(print==NULL)
	{
		cout<<"get function failed"<<endl;
		system("PAUSE");
		return 0;
	}
	char name[20];
	cin>>name;
	print(name);
	FreeLibrary(hDll);

	system("PAUSE");
	return 0;
}

