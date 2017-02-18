#include <iostream>
using namespace std;
class People{
public:
	void setName(char* name);
	void setAge(int age);
	char* getName();
	int getAge();
	void show();
private:
	int age;
	char* name;
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


class Student:public People{
public:
	void setScore(int score);
	int getScore();
private:
	int score;
};

class Worker:public People{
public:
	double Money() const { return money; }
	void Money(double val) { money = val; }
private:
	double money;
	
};

//¶à¼Ì³Ð



int main(){
	Student *xiaoming = new Student;
	xiaoming->setName("Ð¡Ã÷");
	cout<<xiaoming->getName();
	getchar();
	return 0;
}