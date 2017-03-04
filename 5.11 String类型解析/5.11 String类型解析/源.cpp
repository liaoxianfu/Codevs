#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;
int main(){
	string s;
	s = "abcdes";
	string a1, a2;
	a1 = s;
	int b;
	b = s.length();
	cout << a1 << "\n" << b<<"\n";
	cout << a1.c_str()<<"\n";//将String类型转换成char类型

	//string类型仍然可以像char类型一样进行输入和输出
	cin >> a2;
	cout << a2<<"\n";

	system("pause");
	return 0;
}