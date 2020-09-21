#include<iostream>
using namespace std;
#include<vector>

void printVector(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}


//vector容器的容量和大小操作
void test01()
{
	vector<int>v1;	//默认构造 无参构造

	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}

	printVector(v1);

	if (v1.empty())	//为真 代表容器为空
	{
		cout << "v1为空" << endl;
	}
	else
	{
		cout << "v1为空" << endl;
		cout << "v1的容量为：" << v1.capacity() << endl;
		cout << "v1的大小为：" << v1.size() << endl;

	}

	//重新指定大小
	v1.resize(15, 100);	//利用重载版本，可指定默认填充值
	printVector(v1);	//如果指定过长，则默认用0填充新的位置

	v1.resize(5);	
	printVector(v1);	//如果指定的短了，则超出部分会删除

}

int main()
{
	test01();

	system("pause");

	return 0;
}