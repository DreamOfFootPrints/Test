#include<iostream>
using namespace std;

//�ڶ���һ�������ʱ����ʵ��Ĭ�ϵ�ȥ�����Ĺ��ź�������������������棬�������������
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