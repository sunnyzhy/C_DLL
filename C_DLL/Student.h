#include "stdafx.h"
#include <string>
#include <iostream>
using namespace std;

#define DLL_EXPORT extern "C" _declspec(dllexport)
DLL_EXPORT void Print(char *name);

class Student
{
public:
	Student(char *name);
	void Print();
	~Student();
public:
	char *name;
};