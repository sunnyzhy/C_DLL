// C_DLL.cpp : ���� DLL Ӧ�ó���ĵ���������
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