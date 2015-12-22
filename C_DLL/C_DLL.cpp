// C_DLL.cpp : 定义 DLL 应用程序的导出函数。
//

#include "stdafx.h"
#include "Student.h"

Student::Student(char *name):name(name)
{}

Student::~Student()
{}

void Student::Print()
{
	cout<<"called print:"<<this->name<<endl;
}

void Print(char *name)
{
	Student *stu=new Student(name);
	stu->Print();
	delete stu;
}