#include <iostream>
#include<stdlib.h>

using namespace std;
class Student{
public:
	//��Ա���� �������ݵ��ۼ�
	Student(char *name, int age, double score);
	//��Ա����û����������
	void show();
	void showall();
public:
	//��̬����ֻ�ܵ��þ�̬����
	//��ͨ�������Ե������б���
	static int getTotal();
	static double getScore();
//�õ���̬����������ֵ
private:
	static int m_Total;
	static double m_Score;
	//����һ��˽�л� ��Ϊ�������ܳɼ�����Ҫ�õ�ȫԱ����Ϣ,Ҳ����ȫԱ����
private:
	int m_age;//���ֲ���Ҫ��������ݾͲ���Ҫstatic
	char *m_name;
	double m_score;
};

//��̬��Ա���������ʼ��,�����������ʼ��,���ǳ�ʼ�����Բ���ֵ,����ֵĬ��Ϊ0
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
	cout << "����: " << m_name << endl << "����:" << m_age<<"�ɼ�"<<m_score<<endl;
}
void Student::showall(){
	cout << "������: " << getTotal() << "\nƽ����: " << getScore()/getTotal() << endl;
}

int main(){
	//������������
	Student *xiaoming = new Student("xiaoming", 12, 78.5);
	Student *xiaohong = new Student("xiaohong", 12, 89);
	xiaohong->show();
	xiaohong->showall();//ͨ��������� ���һ�� �����ظ�ѡ�������
	xiaoming->show();
	xiaoming->showall();
	//�����
	cout << "/***************************/\n";
	int Stu_All_Num = Student::getTotal();
	double Stu_Aver_Score = Student::getScore() / Stu_All_Num;
	cout << "������: " << Stu_All_Num << "\nƽ����: " << Stu_Aver_Score << endl;
	getchar();
	return 0;



}