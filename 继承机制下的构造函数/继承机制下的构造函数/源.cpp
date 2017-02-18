#include <iostream>
using namespace std;

class People{
public:
	void setName(char*name);
	void setAge(int age);
	char* getName();
	int getAge();
	People();//�������캯��

	People(char*name, int age);
	void show();
private:
	char*name;
	int age;
};

void People::setName(char*name){
	this->name = name;

}

void People::setAge(int age){
	this->age = age;
}

char* People::getName(){
	return name;
}

int People::getAge(){
	return age;
}

void People::show(){
	cout <<"\n����:"<< name <<"\n����"<< age<<endl;
}

People::People(){
	name = "NON";
	age = 0;
}
People::People(char* name, int age){
	this->name = name;
	this->age = age;
}

class Student:public People
{
public:
	void show();
		 

private:

};

void Student::show(){
	cout << "����:" << getName() << "\n����" << getAge() << endl;
}

int main(){
	Student *xiaoming = new Student;
	xiaoming->setName("xioaming");
	xiaoming->setAge(15);
	xiaoming->show();
	getchar();
	return 0;
}