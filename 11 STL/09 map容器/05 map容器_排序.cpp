#include<iostream>
using namespace std;
#include<map>

//map容器 查找和统计

void printMap(map<int, int>& m)
{
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key = " << it->first << " value = " << it->second << endl;
	}
	cout << endl;
}

class MyCompare 
{
public:
	bool operator()(int v1, int v2) const
	{
		return v1 > v2;
	}
};


void test01()
{
	//默认从小到大排序
	//利用仿函数实现从大到小排序
	map<int, int, MyCompare> m;

	m.insert(make_pair(1, 10));
	m.insert(make_pair(2, 20));
	m.insert(make_pair(5, 50));
	m.insert(make_pair(3, 30));
	m.insert(make_pair(4, 40));
	

	for (map<int, int, MyCompare>::iterator it = m.begin(); it != m.end(); it++) 
	{
		cout << "key = " << it->first << " value = " << it->second << endl;
	}
	


}

int main()
{

	test01();

	//test02();

	system("pause");

	return 0;
}