/*
@Article  ��Ԫ����
@writer liaoxianfu

*/



#include <iostream>

using namespace std;
class Address;//��ǰ����address��
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
	friend void Student::show(Address *add);//ʵ������һ���е���Ԫ����
private:
	char *m_country;
	char *m_city;


};

//����Student���Address��Ԫ����
void Student::show(Address *add){
	cout << "����:��" << m_name << "\n����: " << m_age << "\n�ɼ�: " << m_score << endl;
	cout << "��ַ: " << add->m_country << ", " << add->m_city << endl;
}

Address::Address(char *Country, char *Crity){
	m_country = Country;
	m_city = Crity;
}

int main(){
	Student xiaoming("С��", 12, 553.6);
	Address add("����", "����");
//	Student::show(&add);
	xiaoming.show(&add);//ͨ�������
	Student *pxiaohong = new Student("С��", 15, 666);
	Address *addr = new Address("����", "����");
	pxiaohong->show(addr);
	getchar();
}