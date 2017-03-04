#include <iostream>
using namespace std;
//顶级函数重载
class complex
{
public:
	complex();
	complex(double a);
	complex(double a, double b);
	//************************************
	// Method:    setrel
	// FullName:  complex::setrel
	// Access:    public 
	// Returns:   void
	// Qualifier:
	// Parameter: double a
	// Describe: 因为重载函数并不在中声明,所以
	// 需要获得类的定义,因此需要set方法进行重载的计算
	
	//************************************
	void setrel(double a);
	void setimg(double b);
	double getrel();
	//************************************
	// Method:    getimg
	// FullName:  complex::getimg
	// Access:    public 
	// Returns:   double
	// Qualifier:
	// Describe: 返回重载计算过后的值
	//************************************
	double getimg();
	void show();
	~complex();

private:
	double rel;
	double img;
};

complex::complex()
{
	rel = 0.0;
	img = 0.0;
}

complex::complex(double a, double b)
{
	rel = a;
	img = b;
}

complex::complex(double a)
{
	rel = a;
	img = 0.0;
}

complex::~complex()
{
}

void complex::setrel(double a)
{
	rel = a;
}

void complex::setimg(double b)
{
	img = b;
}

double complex::getrel()
{
	return rel;
}

double complex::getimg()
{
	return img;
}

void complex::show()
{
	cout << rel << "+"<<img << "i" << endl;
}

complex operator+( complex &A,  complex &B){
	complex C;
	C.setrel(A.getrel() + B.getrel());
	C.setimg(A.getimg() + B.getimg());
	return C;
}

int main(){
	complex a(45, 2);
	complex b(4, 2.3);
	complex c;
	c = a + b;
	c.show();
	getchar();
	return 0;


}