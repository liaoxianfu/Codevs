#include <iostream>
#include<string>
//���� �Ǵ������������л����Ƶ����� ͨ���������������
//��������ö�����

//��������
using namespace std;
class People{
public:
	void setname(string name);
	void setage(int age);
	string getname();
	int getage();


private:
//	char *name;
	string name;
	int age;
};
void People::setage(int age){
	this->age = age;


}

int  People::getage(){
	return age;
}

void People::setname(string name){
	this->name = name;
}
string People::getname(){
	return name;
}

//����������
class Student: public People{
public:
	void setscore(int score);
	int getscore();
	void show();
private:
	int score;
};

void Student::setscore(int score){
	this->score = score;

}
int Student::getscore(){
	return score;
}

void Student::show(){
	cout << getname() <<endl<< getage()<<endl << getscore() <<endl<< endl;
}


int main(){
	Student *xiaoming = new Student;
	xiaoming->setname("С��");
	xiaoming->setage(15);
	xiaoming->setscore(88);
	cout << xiaoming->getname() << endl;
	xiaoming->show();
	getchar();

}