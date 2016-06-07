#include<iostream>
using namespace std;
#include<assert.h>



void Test1()
{
	int a = 0;
	cin >> a;
	assert(a>5);//为true的时候继续执行，为false的时候发生断言
}



int main()
{
	Test1();
	system("pause");
	return 0;
}