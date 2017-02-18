/*
在c语言中struct 是不能有函数在里面定义的,但是c++
支持, class 与struct区别在于,class成员变量和成员函数是private
而struct是public 所以建议使用class 进行类的定义

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
	cout <<"姓名"<< m_name<<"\n年龄"<< m_age <<"成绩"<< m_score << endl;
}

int main(){
	Student *pstu = new Student("小明", 15, 99);
	pstu->show();
	pstu->m_age = 45;
	pstu->show();
	//可以更改数据,不建议使用struct定义类
	getchar();
}