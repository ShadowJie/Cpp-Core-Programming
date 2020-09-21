#include<iostream>
using namespace std;
#include<vector>

//vector容器 预留空间

void printVector(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	vector<int>v;

	//利用reserve预留空间
	v.reserve(100000);

	int num = 0;	//统计开辟次数
	int* p = NULL;
	for (int i = 0; i < 100000; i++)
	{
		v.push_back(i);

		if (p != &v[0])
		{
			p = &v[0];
			num++;
		}
	}

	cout << "num = " << num << endl;
	

}



int main()
{
	test01();

	//test02();

	system("pause");

	return 0;
}