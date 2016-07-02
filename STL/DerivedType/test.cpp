#include<iostream>
using namespace std;


//其实是可以推导出对应的返回值类型的，但是就是


//template<class T>
//struct A
//{
//	T Print(T value)
//	{
//		return value;
//	}
//};
//
//template<class T>
//T Print(T x)
//{
//	return x;
//}

//
//void Test1()
//{
//	A<int> a1;
//	int value = a1.Print(5);
//	cout << Print(10);
//}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

template<class T>
struct B
{
	B(T x)
		:_a(x)
	{}
	typedef T ValueType;
	T& operator*()
	{
		return _a;
	}
	T _a;

};

template<class T>
typename T::ValueType Fun1(T value)
{
	return *value;
}


void Test2()
{
	B<int> b1(10);
	cout<<Fun1(b1);
}


int main()
{
	//Test1();
	Test2();
	system("pause");
	return 0;
	
}