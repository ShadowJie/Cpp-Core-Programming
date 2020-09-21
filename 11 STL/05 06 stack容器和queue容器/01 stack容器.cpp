//栈容器常用接口
#include<iostream>
using namespace std;
#include<stack>

//栈stack容器
void test01()
{
	//创建栈容器 栈容器必须符合先进后出
	stack<int> s;

	//向栈中添加元素，叫做 入栈
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);

	//只要栈不为空 查看栈顶并出栈
	while (!s.empty()) {
		//输出栈顶元素
		cout << "栈顶元素为： " << s.top() << endl;
		//弹出栈顶元素
		s.pop();
	}
	cout << "栈的大小为：" << s.size() << endl;

}

int main() {

	test01();

	system("pause");

	return 0;
}