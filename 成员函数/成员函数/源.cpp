#include<iostream>
class Student{
public:
	int age;
	char *name;
	void say();
	void say01();
	void talk(){
		std::cout << name << std::endl;
		//������Ĭ������������
		//������������Ҫ�ں�����ǰ���inline����
	}
};
//��Ա���� java�ни�д
/*
����Ա��������������ʱ���ͱ����ں�����ǰ��������������޶���
::����Ϊ���������Ҳ����������������������޶�������
�������������ͺ�������ָ����ǰ���������ĸ��ࡣ
*/

/*
	��Ա���������������ж���
*/
void Student::say(){

	std::cout << age << name <<std:: endl;

}

//��������������
/*
�����������ⶨ�� inline �����ķ�ʽ�����뽫��Ķ���ͳ�Ա�����Ķ�
�嶼����ͬһ��ͷ�ļ��У�����ͬһ��Դ�ļ��У����������ʱ�޷�����Ƕ��
�������������Ƕ�뵽�������ó���
*/
inline void Student::say01(){

	std::cout << age << name << std::endl;

}

int main(){
	//�ڶ��д�������
	Student li;
	li.age = 45;
	li.name = "����";
	li.say();
	li.talk();

	getchar();

}