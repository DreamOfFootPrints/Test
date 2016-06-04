#include<iostream>
using namespace std;


//测试default的用法

void Test()
{
	int a = 0;
	cin >> a;
	switch (a)
	{
	default:
		cout << "default" << endl;
	case 1:
		cout << 1 << endl;
		break;
	case 2:
		cout << 2 << endl;
		break;
	case 3:
		cout << 3 << endl;
		break;
	
		
	}
}

int main()
{
	Test();
	system("pause");
	return 0;
}