/*
string 字符串的使用 必须包括string头文件
string 和Java中的类似
*/

#include <iostream>
#include <string>
using namespace std;

int main(){
	string s = "hrelelfv";
	string s2 = s;
	string s3(5, 's');
	cout << s << endl << s2 << endl << s3 << endl;
	getchar();
}