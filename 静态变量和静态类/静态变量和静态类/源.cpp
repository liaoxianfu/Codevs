#include <iostream>
#include<stdlib.h>

using namespace std;
class Student{
public:
	//成员函数 进行数据的累计
	Student(char *name, int age, double score);
	//成员函数没有数据类型
	void show();
	void showall();
public:
	//静态函数只能调用静态变量
	//普通函数可以调用所有变量
	static int getTotal();
	static double getScore();
//得到静态函数变量数值
private:
	static int m_Total;
	static double m_Score;
	//数据一般私有化 因为总数和总成绩是需要得到全员的信息,也就是全员共享
private:
	int m_age;//这种不需要共享的数据就不需要static
	char *m_name;
	double m_score;
};

//静态成员变量必须初始化,而且在类外初始化,但是初始化可以不赋值,不赋值默认为0
double Student::m_Score = 0.0;
int Student::m_Total = 0;


int Student::getTotal(){
	return m_Total;
}
double Student::getScore(){
	return m_Score;

}


Student::Student(char*name, int age, double score) :m_name(name), m_age(age),m_score(score){
	m_Total++;
	m_Score += m_score;

}
void Student::show(){
	cout << "姓名: " << m_name << endl << "年龄:" << m_age<<"成绩"<<m_score<<endl;
}
void Student::showall(){
	cout << "总人数: " << getTotal() << "\n平均分: " << getScore()/getTotal() << endl;
}

int main(){
	//匿名创建对象
	Student *xiaoming = new Student("xiaoming", 12, 78.5);
	Student *xiaohong = new Student("xiaohong", 12, 89);
	xiaohong->show();
	xiaohong->showall();//通过对象调用 结果一样 避免重复选择类调用
	xiaoming->show();
	xiaoming->showall();
	//类调用
	cout << "/***************************/\n";
	int Stu_All_Num = Student::getTotal();
	double Stu_Aver_Score = Student::getScore() / Stu_All_Num;
	cout << "总人数: " << Stu_All_Num << "\n平均分: " << Stu_Aver_Score << endl;
	getchar();
	return 0;



}