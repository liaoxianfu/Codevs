#include <iostream>
using namespace std;
class base
{
public:
	//************************************
	// Method:    s
	// FullName:  base::s
	// Access:    public 
	// Returns:   void
	// Qualifier:
	//************************************
	void s(){ cout << "this is base" << endl; }
private:
};
class dev :public base{
public:
	void e(){ cout << "this is dev" << endl; }
private:
};

int main(){
	dev *p;
	p = new dev;
	p->e();
	p->s();
	/*
	基本的调用
	可以调用dev及父类的函数
	*/
	/*
		有时候我们希望强制转换成基类
		有两种
		1 静态调用 static_cast
		2 动态调用(必有多态 也就是要有virtual)dynamic_cast
	*/
	/*dev *p2;
	p2 = new base;
	p2 = static_cast <dev*>(new  base);
	p2->e();
	p2->s();
*/
	//提示错误

	getchar();
	return 0;

}
 