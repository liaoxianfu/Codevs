#include <iostream>
using namespace std;
/*
	���캯���ǲ��������麯����
	��Ϊ���캯���ڶ������û�д���֮ǰ���Ѿ�ִ�й���
	�������������������ٶ��� ����������������Ϊ�麯��
	�麯�����ܼ��ھ�̬����
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
	cout << "���ǻ��๹�캯��\n";
	a = new int[10];
}
base::~base(){
	cout << "���ǻ�����������\n";
	delete []a;
}

derivate::derivate(){
	cout << "���������๹�캯��\n";
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
	�����������Ĺ��캯����������
	ֻ�����˻������������
	�����Ҫ�ĳ������
	*/

}