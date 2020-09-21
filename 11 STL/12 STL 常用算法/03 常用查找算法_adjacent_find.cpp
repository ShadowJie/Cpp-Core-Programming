#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

//常用查找算法 adjacent_find
void test01()
{
	vector<int> v;
	v.push_back(0);
	v.push_back(2);
	v.push_back(0);
	v.push_back(3);
	v.push_back(1);
	v.push_back(4);
	v.push_back(3);
	v.push_back(3);

	//查找相邻重复元素
	vector<int>::iterator it = adjacent_find(v.begin(), v.end());
	if (it == v.end()) {
		cout << "未找到相邻重复元素!" << endl;
	}
	else {
		cout << "找到相邻重复元素为:" << *it << endl;
	}
}

int main()
{
	test01();

	//test02();

	system("pause");

	return 0;
}