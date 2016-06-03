#include<iostream>
using namespace std;


enum MyEnum:char
{
	ADD
};

void Test()
{
	cout << ADD << endl;
	cout << sizeof(ADD) << endl;
}

int main()
{
	Test();
	system("pause");
	return 0;
}