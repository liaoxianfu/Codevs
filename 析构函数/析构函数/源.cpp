#include<iostream>
using namespace std;
class Student{
public:
	//构造函数 方法1:
	/*Student(char* name,int age){
		m_name = name;
		m_age = age;
	}*/
	//方法2:
	Student(char *name, int age);
	void show(){
		cout << m_age << m_name << endl;
	}
private:
	char *m_name;
	int m_age;
};
//参数初始化表 作用:初始化const成员(const成员必须按照此方法初始化  )
Student::Student(char *name, int age) :m_name(name), m_age(age){}

int  main(){
	Student stu("xiaom", 12);
	stu.show();
	Student *pstu = new Student("liming", 45);//因为构造函数被声明,所以按照声明的函数定义执行
	pstu->show();
	getchar();
}