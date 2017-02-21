#include <iostream>
using namespace std;
/*
	构造函数是不能声明虚函数的
	因为构造函数在对象对象没有创建之前就已经执行过了
	但是析构函数用于销毁对象 析构函数可以声明为虚函数
	虚函数不能加在静态函数
*/
class base
{
public:
	base();
	virtual ~base();
	//~base();
private:
	int *a;
};

class derivate :public base
{
public:
	derivate();
	 ~derivate();
private:
	int*b;
};
base::base(){
	cout << "我是基类构造函数\n";
	a = new int[10];
}
base::~base(){
	cout << "我是基类析构函数\n";
	delete []a;
}

derivate::derivate(){
	cout << "我是派生类构造函数\n";
	b = new int[100];
}

derivate::~derivate(){
	cout << "wo shi pai sheng lei xi gou han shu\n";
	delete []b;
}
int main(){
	base *p;
	p = new derivate;
	delete p;
	getchar();
	return 0;
	/*
	基类和派生类的构造函数都被调用
	只调用了基类的析构函数
	因此需要改成虚基类
	*/

}