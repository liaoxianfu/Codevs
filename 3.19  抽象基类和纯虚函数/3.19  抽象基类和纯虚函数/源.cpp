#include <iostream>
using namespace std;
/*
�����Ա����û�к����壬ֻ�к����������ڴ��麯��������β���ϡ�=0�������˺���Ϊ�����Ա������
virtual ������������ ������ (��������) = 0;

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
	�����Ա�������Ա�������̳У���������಻���¶����������е����У��ж����Ҫ���¶�������
	�����Ա��������������ͬ�����Ϊ������࣬���Ҳ�������ڴ�������
	Ҳ����˵dev1����Ϊû�н���display()��������д���ܽ��ж���Ĵ���

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
		2	IntelliSense:  ������ʹ�ó��������� "base" �Ķ���:
		���� "base::display" �Ǵ����⺯��	

	*/

//	dev1 s(2);
	/*
		2	IntelliSense:  ������ʹ�ó��������� "dev1" �Ķ���:
		������ ���� "base::display" û��ǿ�������
	*/

	dev2 s(5, 6);
	s.display();
	/*
		��Ϊdev2��д��display�������Կ��Դ�������
	*/
	getchar();
	return 0;
}