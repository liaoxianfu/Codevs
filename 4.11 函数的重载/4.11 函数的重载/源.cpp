#include <iostream>
using namespace std;
class complex{
public:
	complex();
	complex(double a);
	complex(double a,double b);
	//实现函数的重载
	complex operator+(const complex &A)const;
	//函数的声明 实现
	complex operator-(const complex &A)const;
	complex operator*(const complex &A)const;
	complex operator/(const complex &A)const;
	void display();
private:
	double real;
	double image;

};
complex::complex(){
	real = 0.0;
	image = 0.0;
}

complex::complex(double a){
	real = a;
	image = 0.0;
}

complex::complex(double a, double b)
{
	real = a;
	image = b;

}

void complex::display()
{
	cout << real << "+" << image << "i" << endl;
}

//函数的实现 返回complex的一个对象 仍然是一个复数
/*
	复数相加 返回的仍然是复数

*/
complex complex::operator+(const complex &A) const
{
	complex B;
	B.real = real + A.real;
	B.image = image + A.image;
	return B;
}

complex complex::operator-(const complex &A) const
{
	complex B;
	B.real = real - A.real;
	B.image = image - A.image;
	return B;
}

complex complex::operator*(const complex &A) const
{
	complex B;
	B.real = real * A.real-image*A.image;
	B.image = image * A.real+real*A.image;
	return B;
}

complex complex::operator/(const complex &A) const
{
	complex B;
	double square = A.real*A.real + A.image*A.image;
	B.real = (real*A.real + image *A.image) / square;
	B.real = (image*A.real - real*A.image) / square;
	return B;
}

int main(){
	double a, b;
	puts("请输入负数的实部和虚部");
	cin >> a >> b;
	complex c1(a, b);
	puts("请输入负数的实部和虚部");
	double c, d;
	cin >> c >> d;
	
	complex c2(c, d);
	complex c3;

	c3 = c2 + c1;
	c3.display();
	system("pause");
	return 0;
}