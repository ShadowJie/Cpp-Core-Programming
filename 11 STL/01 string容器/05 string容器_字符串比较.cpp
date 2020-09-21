#include<iostream>
using namespace std;
#include<string>

//×Ö·û´®±È½Ï
void test01()
{
	string str1 = "aello";
	string str2 = "hello";

	if (str1.compare(str2) == 0)
	{
		cout << "str1 = str2" << endl;
	}
	else if (str1.compare(str2) > 0)
	{
		cout << "str1 > str2" << endl;
	}
	else
	{
		cout << "str1 < str2" << endl;
	}
}

int main()
{
	test01();

	//test02();

	system("pause");

	return 0;


}
