#include <iostream>
using namespace std;
//������������
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
	// Describe: ��Ϊ���غ���������������,����
	// ��Ҫ�����Ķ���,�����Ҫset�����������صļ���
	
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
	// Describe: �������ؼ�������ֵ
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