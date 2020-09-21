#include<iostream>
using namespace std;
#include<deque>
#include<algorithm>

//deque容器 排序
void printDeque(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		//*it=100;	//容器中数据不可修改
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{

	deque<int> d;
	d.push_back(10);
	d.push_back(20);
	d.push_front(100);
	d.push_front(200);

	printDeque(d);
	
	//对于支持随机访问的迭代器的容器，都可以利用sort算法直接对齐进行排序
	//vector容器也可以利用sort排序
	sort(d.begin(), d.end());	//默认升序 从小到大
	printDeque(d);

}

int main()
{

	test01();

	//test02();

	//test03();

	system("pause");

	return 0;
}