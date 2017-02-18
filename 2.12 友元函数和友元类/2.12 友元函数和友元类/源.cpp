/*
@Article  友元函数
@writer liaoxianfu

*/



#include <iostream>

using namespace std;
class Address;//提前声明address类
class Student {
public:
	Student(char *name, int age, double score);
	void show(Address *add);
private:
	char *m_name;
	int m_age;
	double m_score;

};
Student::Student(char*name, int age, double score) :m_name(name), m_age(age), m_score(score){}


class Address{
public:
	Address(char* Country, char *City);
	friend void Student::show(Address *add);//实现在另一类中的友元函数
private:
	char *m_country;
	char *m_city;


};

//定义Student类的Address友元函数
void Student::show(Address *add){
	cout << "姓名:　" << m_name << "\n年龄: " << m_age << "\n成绩: " << m_score << endl;
	cout << "地址: " << add->m_country << ", " << add->m_city << endl;
}

Address::Address(char *Country, char *Crity){
	m_country = Country;
	m_city = Crity;
}

int main(){
	Student xiaoming("小米", 12, 553.6);
	Address add("河南", "荥阳");
//	Student::show(&add);
	xiaoming.show(&add);//通过类访问
	Student *pxiaohong = new Student("小红", 15, 666);
	Address *addr = new Address("河南", "信阳");
	pxiaohong->show(addr);
	getchar();
}