#include <iostream>
using namespace std;
/*
纯虚成员函数没有函数体，只有函数声明，在纯虚函数声明结尾加上“=0”表明此函数为纯虚成员函数。
virtual 函数返回类型 函数名 (函数参数) = 0;

*/
class base
{
public:
	base();
	
	base(int x){ a = x; }
	virtual void display() = 0;
	int geta(){ return a; }

private:
	int a;
};

base::base()
{
	a = 0;
}
/*
	纯虚成员函数可以被派生类继承，如果派生类不重新定义抽象基类中的所有（有多个则要重新定义多个）
	纯虚成员函数，则派生类同样会成为抽象基类，因而也不能用于创建对象
	也就是说dev1类因为没有进行display()函数的重写不能进行对象的创建

*/


class dev1:public base
{
public:
	
	dev1(int y){ b = y; }
	
private:
	int b;
};

class dev2:public base
{
public:
	dev2(int a, int b) :base(a){ x = b; }
	void display(){
		cout << x << endl;
	}

private:
	int x;
};




int  main(){
//	base s(5);
	/*
		2	IntelliSense:  不允许使用抽象类类型 "base" 的对象:
		函数 "base::display" 是纯虚拟函数	

	*/

//	dev1 s(2);
	/*
		2	IntelliSense:  不允许使用抽象类类型 "dev1" 的对象:
		纯虚拟 函数 "base::display" 没有强制替代项
	*/

	dev2 s(5, 6);
	s.display();
	/*
		因为dev2重写了display函数所以可以创建对象
	*/
	getchar();
	return 0;
}