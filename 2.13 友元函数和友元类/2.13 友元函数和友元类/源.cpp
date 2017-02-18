/*
@友元类
@2017.2.12
*/

#include <iostream>
using namespace std;
class Address;
class Student
{
public:
	Student(char *name , int age);
	void show(Address *add);
	~Student();

private:
	char *m_name;
	int m_age;
};

Student::Student(char *name,int age)
{
	m_name = name;
	m_age = age;
}

Student::~Student()
{
}

class Address{
public:
	Address(char *city, char *country);
	friend class Student;
private:
	char *m_city;
	char *m_country;

};

Address::Address(char *city, char *country){
	m_city = city;
	m_country = country;
}void Student::show(Address *add){
	cout << "姓名:" << m_name << "\n年龄" << m_age << endl;
	cout << "地址" << add->m_country << add->m_city << endl;
}


int main(){
	Student xiaoming("xiaoming", 15);
	Address add("henan", "huana");
	xiaoming.show(&add);
	Student *xiaohong = new Student("xiaon", 45);
	Address *addr = new Address("hre", "hdus");
	xiaohong->show(addr);
	getchar();
	return 0;
	/*
		友元的关系是单向的,例如friend Student的友元只能是Student访问Address类的成员
		不能以Address访问Student
	*/
}