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
	cout << "请输入你要找的数据位置" << endl;
	cin >> inde;
	try{
		cout << arr_index(A, i, inde)<<endl;
	}
	catch (index e){
		if (e == undeeflow){
			cout << "你输入的数组下标为负,数组下标不能为负" << endl;
			system("pasue");
			exit(-1);

		}
		if (e == overflow){
			cout << "你输入的数组下标大于数组的最大下标" << endl;
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

