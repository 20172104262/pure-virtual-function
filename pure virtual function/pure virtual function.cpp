// pure virtual function.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include"iostream"
using namespace std;

class Cbase
{
public:
	virtual void test()
	{

	}
	virtual void display()
	{
		cout << "����" << endl;
	}
};
class Cderivd :public Cbase
{
public:
	void test()
	{

	 }
	void display()
	{
		cout << "������" << endl;
	}
};

int main()
{
	Cbase *q;
	Cbase obj1;
	Cderivd obj2;
	obj1.display();
	q = &obj2;
	q->Cbase::display();
	q->display();
	obj2.display();
    return 0;
}

