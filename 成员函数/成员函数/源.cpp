#include<iostream>
class Student{
public:
	int age;
	char *name;
	void say();
	void say01();
	void talk(){
		std::cout << name << std::endl;
		//在类中默认是内联函数
		//如果在类外就需要在函数体前添加inline声明
	}
};
//成员函数 java中叫复写
/*
当成员函数定义在类外时，就必须在函数名前面加上类名予以限定。
::被称为域解析符（也称作用域运算符或作用域限定符），
用来连接类名和函数名，指明当前函数属于哪个类。
*/

/*
	成员函数必须在类中有定义
*/
void Student::say(){

	std::cout << age << name <<std:: endl;

}

//内联函数的声明
/*
这种在类体外定义 inline 函数的方式，必须将类的定义和成员函数的定
义都放在同一个头文件中（或者同一个源文件中），否则编译时无法进行嵌入
（将函数代码的嵌入到函数调用出）
*/
inline void Student::say01(){

	std::cout << age << name << std::endl;

}

int main(){
	//在堆中创建对象
	Student li;
	li.age = 45;
	li.name = "李明";
	li.say();
	li.talk();

	getchar();

}