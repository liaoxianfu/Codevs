/*
��c������struct �ǲ����к��������涨���,����c++
֧��, class ��struct��������,class��Ա�����ͳ�Ա������private
��struct��public ���Խ���ʹ��class ������Ķ���

*/

#include <iostream>
using namespace std;

struct  Student
{
	Student(char *name, int age, double score);
	char *m_name;
	int m_age;
	double m_score;
	void show();

};

Student::Student(char *name, int age, double score){
	m_name = name;
	m_age = age;
	m_score = score;

}

void Student::show(){
	cout <<"����"<< m_name<<"\n����"<< m_age <<"�ɼ�"<< m_score << endl;
}

int main(){
	Student *pstu = new Student("С��", 15, 99);
	pstu->show();
	pstu->m_age = 45;
	pstu->show();
	//���Ը�������,������ʹ��struct������
	getchar();
}