#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;
int main(){
	string s = "hello";
	string a = "world";
	string b1, b2;
	//string 可以U使用+ +=进行字符串的连接
	b1 = s + a;
	s += a;

	cout << "b1=" << b1 << endl;
	cout << "s+=a=" << s<<endl;
	/*////////////////////////////////////////////////////////////////////*/
	/*
	string字符串同样可以先字符串数组那样按照下标逐一访问字符串中的每一个字符，
	string字符串的起始下标仍是从0开始
	*/
	for (unsigned int i = 0; i < s.length();i++)
	{
		printf("s[%d]=%c\n", i, s[i]);

	}

	/*
	erase函数可以删除string类型变量中的一个子字符串。
	erase函数有两个参数，第一个参数是要删除的子字符串的起始下标，
	第二参数是要删除子字符串的长度，如果第二个参数不指名的话则是
	直接从第一个参数获取起始下标，然后一直删除至字符串结束。
	*/
	//注意在删除直接在元字符串上进行 所以一个字符串只能进行一次做,第二次的操作是建立在第一次更改后
	//的基础上进行的

	b2 = s.erase(3);
	string b3 = b1.erase(1, 4);
	string b4 = s.erase(1, 55);//数组越界 但还是没有问题 自动删除到最后一个后就停止删除


	cout << b2 << "\n" << b3 << "\n" << b4 << "\n";


	/***********************字符串的插入*********************************************/

	string b5 = b2.insert(2, b3);
	//表示在b2的第二个字符的地方插入b3字符串
	cout << "b5=" << b5;
	string b6 = b5.insert(0, "aaaaaaaaaaaa");
	cout << "\nb6=" <<b6;
	//insert也有可能越界(如果第一个数据越界就会报错)
	/*
	replace函数可以用一个指定的字符串来替换string类型变量中的一个子字符串，
	该函数有三个参数，第一个参数表示待替换的子字符串的真实下标，
	第二个参数表示待替换子字符串的长度，第三个参数表示要替换子字符串的字符串。
	第三个参数同样可以是string类型变量或C风格字符串
	*/
	string b7 = b6.replace(1, 6, "bbbbbbbbbbbb");
	cout << "\nb7=" << b7 << "\n";
	//第二个参数和第三个的数据如果不同,就按第二个数据进行删除 多余的进行填充

	/****************swap交换函数***********************/
	b5.swap(b7);
	
	cout << "\nb5=" << b5;
	cout << "\nb7=" << b7 << "\n";

	string s1 = "string";
	string s2 = "aaaaaa";
	s1.swap(s2);
	cout << s1 << endl;
	cout << s2 << endl;
		/*
		函数substr可以提取string字符串中的子字符串，
		该函数有两个参数，第一个参数为需要提取的子字符串的起始下标，
		第二个参数是需要提取的子字符串的长度
		*/
	string s3;
	s3 = s2.substr(1, 3);
	cout << s3 << endl;
	/*
	find函数可以在字符串中查找子字符串中出现的位置。
	该函数有两个参数，第一个参数是待查找的子字符串，第二个参数是表示开始查找的位置，
	如果第二个参数不指名的话则默认从0开始查找，也即从字符串首开始查找。
	*/
	string d1 = "wehruwghfuiwgvu";
unsigned	int i=d1.find("ru", 2);
unsigned	int j = d1.find("n");
	if (i < d1.length())
		cout <<"Fond:  "<< i << endl;
	else
		cout << "NOt Found" << endl;
	if (j < d1.length())
		cout << j << endl;
	else
		cout << "NOt Font\n";
	system("pause");
	return 0;

}