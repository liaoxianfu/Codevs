#include<iostream>
using namespace std;
class Student{
public:
	//���캯�� ����1:
	/*Student(char* name,int age){
		m_name = name;
		m_age = age;
	}*/
	//����2:
	Student(char *name, int age);
	void show(){
		cout << m_age << m_name << endl;
	}
private:
	char *m_name;
	int m_age;
};
//������ʼ���� ����:��ʼ��const��Ա(const��Ա���밴�մ˷�����ʼ��  )
Student::Student(char *name, int age) :m_name(name), m_age(age){}

int  main(){
	Student stu("xiaom", 12);
	stu.show();
	Student *pstu = new Student("liming", 45);//��Ϊ���캯��������,���԰��������ĺ�������ִ��
	pstu->show();
	getchar();
}