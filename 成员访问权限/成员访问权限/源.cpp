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
//成员函数
  void student::setage(int age)
{
	  p_age = age;
}

  void student::setname(char* name){
	  p_name = name;
  }




int main(){
	student *p_li = new student;//在堆中开辟对象
	p_li->setage(45);
	p_li->setname("李明");
	p_li->say();
	delete  p_li;
	getchar();
	return 0;
}