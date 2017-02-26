#include <iostream>
/************************************************************************************
*	重载 按照类进行 例如将+重新定义 先声明一个复数类complex 定义构造函数 实现不同情况下的		*
*   数据输入oprter 进行重载 加减进行重新定义计算											*
*	将现有操作符与一个成员函数相关联，并将该操作符与其成员对象（操作数）一起使用				*
*	complex complex::operator+(const complex &A) const	(具体意思)					*
*	第一个complex是返回值类型是complex类 complex::operator+(const complex &A) const	*
*	一个成员函数相关联(complex::operator+)												*
*	并将该操作符与其成员对象（操作数）一起使用((const complex &A) const					*
*************************************************************************************/
using namespace std;


class complex{
public:
	complex();
	complex(double a);
	complex(double a, double b);
	complex operator+(const complex &A) const;
	
	/*
	operator重载函数标志

	*/
	complex operator-(const complex &A) const;
	/*complex operator*(const complex &A) const;
	complex operator/(const complex &A) const;*/
	void result();
private:
	double rel;
	double img;
};



complex::complex()
{
	rel = 0.0;
	img = 0.0;
}

complex::complex(double a)
{
	rel = a;
	img = 0.0;
}

complex::complex(double a, double b)
{
	rel = a;
	img = b;
}
complex complex::operator+(const complex &A) const
{
	complex B;
	B.rel = rel + A.rel;
	B.img = img + A.img;
	return B;
}

complex complex::operator-(const complex &A) const
{
	complex B;
	B.rel = rel - A.rel;
	B.img = img - A.img;
	return B;
}

void complex::result()
{
	cout << rel << "+" << img << "i" << endl;
}


int main(){
	complex a(2, 3);
	complex b(3);
	complex c = a + b;

	c.result();
	getchar();
	return 0;
}