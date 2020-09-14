#include<iostream>
using namespace std;

//拷贝构造函数调用时机

//1、使用一个已经创建完毕的对象来初始化一个新对象

//2、值传递的方式给函数参数传值

//3、值方式返回局部对象

class Person
{
public:
	Person()
	{
		cout << "Person的默认构造函数调用" << endl;
	}

	Person(int age)
	{
		cout << "Person的有参构造函数调用" << endl;
		m_Age = age;
	}

	Person(const Person& p)
	{
		//将传入的人身上的所有属性，拷贝到我身上
		m_Age = p.m_Age;
		cout << "Person的拷贝构造函数调用" << endl;
	}

	//析构函数
	~Person()
	{
		cout << "Person的析构函数调用" << endl;
	}
	int m_Age;
};

//1、使用一个已经创建完毕的对象来初始化一个新对象
void test01()
{
	Person p1(20);
	Person p2(p1);

	cout << "P2的年龄为：" << p2.m_Age << endl;
}

//2、值传递的方式给函数参数传值

void doWork(Person p)
{

}

void test02()
{
	Person p;
	doWork(p);
}

//3、值方式返回局部对象

Person doWork2()
{
	Person p1;
	cout << (int*)&p1 << endl;
	return p1;
}

void test03()
{
	Person p = doWork2();
	cout << (int*)&p << endl;
}

int main()
{
	//test01();
	//test02();
	test03();

	system("pause");
	return 0;
}