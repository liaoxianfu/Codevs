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
	�����ĵ���
	���Ե���dev������ĺ���
	*/
	/*
		��ʱ������ϣ��ǿ��ת���ɻ���
		������
		1 ��̬���� static_cast
		2 ��̬����(���ж�̬ Ҳ����Ҫ��virtual)dynamic_cast
	*/
	/*dev *p2;
	p2 = new base;
	p2 = static_cast <dev*>(new  base);
	p2->e();
	p2->s();
*/
	//��ʾ����

	getchar();
	return 0;

}
 