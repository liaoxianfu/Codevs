#include <iostream>
#include<cstdlib>
using namespace std;
enum  index
{
	undeeflow,overflow
};

int arr_index(int*A, int n,int index);
int main(){
	int i;
	int *A = new int[10];
	for ( i = 0; i < 10; i++){
		cin >> A[i];

	}
	int inde;
	cout << "��������Ҫ�ҵ�����λ��" << endl;
	cin >> inde;
	try{
		cout << arr_index(A, i, inde)<<endl;
	}
	catch (index e){
		if (e == undeeflow){
			cout << "������������±�Ϊ��,�����±겻��Ϊ��" << endl;
			system("pasue");
			exit(-1);

		}
		if (e == overflow){
			cout << "������������±�������������±�" << endl;
			system("pasue");
			exit(-1);
		}
	}
	system("pause");
	getchar();
	return 0;
}
int arr_index(int*A, int n,int index){
	if (index < 0) throw undeeflow;
	if (index > n-1) throw overflow;
	return A[index];
}

