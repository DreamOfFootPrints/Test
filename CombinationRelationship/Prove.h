#include<iostream>
using namespace std;



class A
{
public:
	A()
	{
		cout << "A()" << endl;
		cout << _a << endl;
	}
	~A()
	{
		cout << "~A()" << endl;
	}
private:
	int _a;
};

class B
{
public:
	B()
	{
		cout << "B()" << endl;
		cout << _b << endl;
	}
	~B()
	{
		cout << "~B()" << endl;
	}
private:
	int _b;
};


class C
{
public:
	C(){ cout << "C()" << endl; };//���Զ����ù��캯������������
	~C(){ cout << "~C()" << endl; };
private:
	A _ca;//ֻ��һ��A���B�����
	B _cb;
};


