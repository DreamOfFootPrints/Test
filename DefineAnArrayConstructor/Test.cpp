#include<iostream>
using namespace std;

//在定义一个数组的时候其实会默认的去掉它的够着函数，不管是在类的外面，还是在类的里面
struct A
{
	A()
		/*:_a(1)
		, _count(1)*/
	{}

public:
	int _a;
	int _count ;
};


struct B
{
	A _arr[5];
};

void Test1()
{
	B b;
	cout << endl;
}

void Test2()
{
	A a[15];
	cout << endl;
}

int main()
{
	Test1();
	Test2();
	system("pause");
	return 0;
}