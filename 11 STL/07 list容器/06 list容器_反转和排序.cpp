#include<iostream>
using namespace std;
#include<list>
#include<algorithm>

//list容器 反转和排序

void printList(const list<int>& L)
{
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

bool myCompare(int val1, int val2)
{
	//降序	就让第一个数 > 第二个数
	return val1 > val2;
}

void test01()
{
	list<int>L1;
	L1.push_back(20);
	L1.push_back(10);
	L1.push_back(50);
	L1.push_back(40);
	L1.push_back(30);


	//反转容器的元素
	L1.reverse();
	printList(L1);

	//排序

	//所有不支持随机访问迭代器的容器，不可以用标准算法
	//不支持随机访问迭代器的容器，内部会提供对应一些算法
	//sort(L1.begin(), L1.end());
	printList(L1);

	L1.sort(); //默认的排序规则 从小到大
	printList(L1);

	L1.sort(myCompare); //指定规则，从大到小
	printList(L1);
	
}

int main()
{
	test01();

	system("pause");

	return 0;
}