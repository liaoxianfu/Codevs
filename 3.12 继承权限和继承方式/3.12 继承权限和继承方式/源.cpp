#include <iostream>
#include <string>
using namespace std;
class People
{
public:
	void setNmae(string name){
		this->name = name;
	}
	void setAge(int age){
		this->age = age;
	}

	string getName(){
		return name;
	}
	int getAge(){
		return age;
	}
	void setHooby(string hobby){
		this->hooby = hobby;
	}
private:
	string hooby;

protected:
	int age;
	string name;
};
/*

ʹ��protect ��provide������ͨ���������
*/
class Student :public People{
public:
	void setScore(double score);
	double getScore();

protected:
	double score;

};

void Student::setScore(double score){
	this->score = score;
}
double Student::getScore(){
	return score;
}


int main(){
	Student *liming = new Student;
	liming->setAge(15);
	liming->setNmae("liming");
	/*
	
	*/

	getchar();
	return 0;
}