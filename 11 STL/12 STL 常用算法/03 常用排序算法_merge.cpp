#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

//常用排序算法	merge

class myPrint
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}
};

void test01()
{
	vector<int> v1;
	vector<int> v2;
	//必须相同升序或降序
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 1);
	}

	vector<int> vtarget;

	//目标容器需要提前开辟空间
	vtarget.resize(v1.size() + v2.size());

	//合并  需要两个有序序列
	merge(v1.begin(), v1.end(), v2.begin(), v2.end(), vtarget.begin());
	for_each(vtarget.begin(), vtarget.end(), myPrint());
	cout << endl;
}

int main()
{

	test01();

	system("pause");

	return 0;
}