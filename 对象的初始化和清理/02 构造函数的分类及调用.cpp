#include<iostream>
using namespace std;

//1构造函数的分类及调用
//分类
//	按照参数分类	无参构造和有参构造
class Person
{
	Person()
	{
		cout << "Person的构造函数调用" << endl;
	}
	Person(int a)
	{
		cout << "Person的构造函数调用" << endl;
	}
	~Person()
	{
		cout << "Person的析构函数调用" << endl;
	}
};

int main()
{

	system("pause");
	return 0;
}