#include <iostream>
using namespace std;
class Steudent
{
public:
	int age;
	char *name;
	double score;
	
};
int main01(){
	std::cout << "hello" <<std:: endl;
	getchar();
	
	return 0;
}
int main(){ 
	//	using	namespace std;//c++�����ռ� 
		cout << "hello" << endl;
		//��ջ�д�������
		Steudent lei;
		lei.age = 16;
	//	lei.name = "����";
		lei.name = "����";
		lei.score = 56.3;
		cout << lei.name << endl;
		//�ڶ��д�������
		//���д����Ķ��������ָ����з���
		Steudent *p_li = new Steudent;
		p_li->age = 45;
		p_li->name = "����";
		p_li->score = 66.3;
		//p_li->name << endl;
		cout << p_li->name << endl;
		delete p_li;
		getchar();
		return 0;
}


