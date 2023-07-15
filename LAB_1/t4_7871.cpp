#include<iostream>
using namespace std;
void getdata(int *p,int* q){
	cout << "enter the data for array : ";
	while (p <= q){
		cin >> *p;
		p++;
	}
}
void printdata(int *p,int* q){
	while (p <= q){
		cout<< *p<<"\t";
		p++;
	}
	cout << endl;

}
void reversearr(int *p,int *q){
	while (p <= q){
		int temp = *p;
		*p = *q;
		*q = temp;
		p++, q--;
	}
}
void sortdata(int *p,int* q){
	for (int i = 1; p + i <= q; i++){
		int current = *(p + i);
		int j = i - 1;
		while (*(p + j)>current && j >= 0){
			*(p + j + 1) = *(p + j);
			j--;
		}

		*(p + j + 1) = current;
	}
}
int main(){
	int arr[6] = {};
	int *p = arr, *q = &arr[5];
	getdata(p, q);
	cout << "entered data is  : ";

	printdata(p, q);
	cout << "reversed data is ";
	reversearr(p, q);
	printdata(p, q);
	sortdata(p, q);
	cout << "sortd data is : ";
	printdata(p, q);
	system("pause");


}