#include<iostream>
using namespace std;

//
//�����з��������޷�������˵��<<1���ǳ���2
//�����޷�������˵�� >> 1�����ǳ���2
//�����з�������˵�� >> 1, �ȿ�ʼ�ǳ���2������һ������һ���Ľ��ޣ����� - 1����ѭ��
//(unsigned int)a >> 1; ���ұ߲�0���������һ��


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