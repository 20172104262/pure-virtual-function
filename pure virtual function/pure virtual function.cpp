// pure virtual function.cpp : 定义控制台应用程序的入口点。
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
		cout << "基类" << endl;
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
		cout << "派生类" << endl;
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

