#include <iostream>
using namespace std;
class student
{
	
public:
	void setage(int age);
	void setname(char* name);
	void say(){
		cout << p_name << endl << p_age << endl;
	}
private:
	int p_age;
	char* p_name;
};
//��Ա����
  void student::setage(int age)
{
	  p_age = age;
}

  void student::setname(char* name){
	  p_name = name;
  }




int main(){
	student *p_li = new student;//�ڶ��п��ٶ���
	p_li->setage(45);
	p_li->setname("����");
	p_li->say();
	delete  p_li;
	getchar();
	return 0;
}