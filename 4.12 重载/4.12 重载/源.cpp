#include <iostream>
/************************************************************************************
*	���� ��������� ���罫+���¶��� ������һ��������complex ���幹�캯�� ʵ�ֲ�ͬ����µ�		*
*   ��������oprter �������� �Ӽ��������¶������											*
*	�����в�������һ����Ա����������������ò����������Ա���󣨲�������һ��ʹ��				*
*	complex complex::operator+(const complex &A) const	(������˼)					*
*	��һ��complex�Ƿ���ֵ������complex�� complex::operator+(const complex &A) const	*
*	һ����Ա���������(complex::operator+)												*
*	�����ò����������Ա���󣨲�������һ��ʹ��((const complex &A) const					*
*************************************************************************************/
using namespace std;


class complex{
public:
	complex();
	complex(double a);
	complex(double a, double b);
	complex operator+(const complex &A) const;
	
	/*
	operator���غ�����־

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