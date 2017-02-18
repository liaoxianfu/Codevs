#include <iostream>
using namespace std;
class Steudent
{
public:
	int age;
	char *name;
	double score;
	
};
int main01(){
	std::cout << "hello" <<std:: endl;
	getchar();
	
	return 0;
}
int main(){ 
	//	using	namespace std;//c++命名空间 
		cout << "hello" << endl;
		//在栈中创建对象
		Steudent lei;
		lei.age = 16;
	//	lei.name = "李磊";
		lei.name = "李雷";
		lei.score = 56.3;
		cout << lei.name << endl;
		//在堆中创建对象
		//堆中创建的对象必须用指针进行访问
		Steudent *p_li = new Steudent;
		p_li->age = 45;
		p_li->name = "李雷";
		p_li->score = 66.3;
		//p_li->name << endl;
		cout << p_li->name << endl;
		delete p_li;
		getchar();
		return 0;
}


