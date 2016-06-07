#include<iostream>
using namespace std;

//
//对于有符号数和无符号数来说；<<1就是乘以2
//对于无符号数来说： >> 1，就是除以2
//对于有符号数来说： >> 1, 先开始是除以2，但是一旦过了一定的界限，就是 - 1的死循环
//(unsigned int)a >> 1; 是右边补0，和想象的一样


void Test1()
{
	int a = 0;
	cin >> a;
	int index = 32;
	while (a)
	{
		cout << a << endl;
		a >>= 1;
	/*	a = (unsigned int)a >> 1;*/
		if (index--==0)
		{
			break;
		}
	}
}


void Test2()
{

	int a = 0;
	cin >> a;
	int index = 32;
	while (a)
	{
		cout << a << endl;
		a <<= 1;
		/*	a = (unsigned int)a >> 1;*/
		if (index-- == 0)
		{
			break;
		}
	}
}


int main()
{
	//Test1();
	Test2();
	system("pause");
	return 0;
}