#include<iostream>
using namespace std;
#include<assert.h>



void Test1()
{
	int a = 0;
	cin >> a;
	assert(a>5);//Ϊtrue��ʱ�����ִ�У�Ϊfalse��ʱ��������
}



int main()
{
	Test1();
	system("pause");
	return 0;
}