#include <iostream>
#include<string>
//基类 是创建的类所共有或类似的性质 通过创建基类可以让
//代码的重用度增加

//创建基类
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

//创建派生类
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
	xiaoming->setname("小明");
	xiaoming->setage(15);
	xiaoming->setscore(88);
	cout << xiaoming->getname() << endl;
	xiaoming->show();
	getchar();

}