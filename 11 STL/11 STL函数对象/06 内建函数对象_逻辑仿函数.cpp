#include<iostream>
using namespace std;
#include<vector>
#include<functional>	//内建函数对象头文件
#include<algorithm>

//内建函数对象	逻辑仿函数

//* `template<class T > bool logical_and<T>`              //逻辑与
//* `template<class T > bool logical_or<T>`                //逻辑或
//* `template<class T > bool logical_not<T>`              //逻辑非

//logical_not	逻辑非
void test01()
{
	vector<bool> v;

	v.push_back(true);
	v.push_back(false);
	v.push_back(true);
	v.push_back(false);

	for (vector<bool>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

	//逻辑非  将v容器搬运到v2中，并执行逻辑非运算
	vector<bool> v2;

	v2.resize(v.size());//开辟空间
	transform(v.begin(), v.end(), v2.begin(), logical_not<bool>());	//搬运
	for (vector<bool>::iterator it = v2.begin(); it != v2.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

int main()
{
	test01();

	//test02();

	system("pause");

	return 0;
}