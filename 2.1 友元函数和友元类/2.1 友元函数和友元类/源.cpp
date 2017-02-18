#include<iostream>

using namespace std;
class  Student
{
public:
	 Student(char *name ,int age,double score);
	~ Student();
	friend void show(Student *pstu);//友元函数定义格式
private:
	char*m_name;
	int m_age;
	double m_score;

};

Student::Student(char *name, int age, double score) :m_name(name), m_age(age), m_score(score)
{

}

 Student::~ Student()
{
}

 //友元函数 在声明中加friend 传参,对象指针
 void show(Student *pstu){
	//友元函数是一个全局函数 但是却可以通过定义指针进行访问类的全部成员变量
	 cout << "姓名" << pstu->m_name << "\n年龄: " << pstu->m_age << "\n成绩:" << pstu->m_score << endl;
 }
 /*
 注意show函数定义时 不能直接写 void show()
 因为成员函数在调用的时候回隐式在show(this)添加this指针 但是show时全局函数
 无法确定对象 所以在定义的时候必须明确的指明对象
 
 */
int main(){
	//在堆上建立对象
	Student xiaoming("xiaoming", 12, 88);
	//通过show函数访问(传参,对象指针)
	show(&xiaoming);
	
	//在栈上开辟
	Student *pxiaohong = new Student("小红", 12, 59);
	show(pxiaohong);
	getchar();
	return 0;
}