#include<iostream>

using namespace std;
class  Student
{
public:
	 Student(char *name ,int age,double score);
	~ Student();
	friend void show(Student *pstu);//��Ԫ���������ʽ
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

 //��Ԫ���� �������м�friend ����,����ָ��
 void show(Student *pstu){
	//��Ԫ������һ��ȫ�ֺ��� ����ȴ����ͨ������ָ����з������ȫ����Ա����
	 cout << "����" << pstu->m_name << "\n����: " << pstu->m_age << "\n�ɼ�:" << pstu->m_score << endl;
 }
 /*
 ע��show��������ʱ ����ֱ��д void show()
 ��Ϊ��Ա�����ڵ��õ�ʱ�����ʽ��show(this)���thisָ�� ����showʱȫ�ֺ���
 �޷�ȷ������ �����ڶ����ʱ�������ȷ��ָ������
 
 */
int main(){
	//�ڶ��Ͻ�������
	Student xiaoming("xiaoming", 12, 88);
	//ͨ��show��������(����,����ָ��)
	show(&xiaoming);
	
	//��ջ�Ͽ���
	Student *pxiaohong = new Student("С��", 12, 59);
	show(pxiaohong);
	getchar();
	return 0;
}