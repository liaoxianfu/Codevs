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
	cout << a1.c_str()<<"\n";//��String����ת����char����

	//string������Ȼ������char����һ��������������
	cin >> a2;
	cout << a2<<"\n";

	system("pause");
	return 0;
}