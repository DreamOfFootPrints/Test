#include<iostream>
using namespace std;



void Test()
{
	int a = 0;
	cin >> a;
	switch (a)
	{
		a = a + 1;
	case 1:
		cout << 1.1 << endl;
		cout << 1.2 << endl;
		break;
	case 2:
		cout << 2.1 << endl;
		cout << 2.2 << endl;
		break;
	default:
		cout << 3.1 << endl;
		cout << 3.2 << endl;
		break;
	}
}


int main()
{
	Test();
	system("pause");
	return 0;
}