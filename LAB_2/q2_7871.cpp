//#include<iostream>
//using namespace std;
//void copyarr(int *q,int* &arr1,int reduce,int n) {
//	int j = 0;
//	for (int i = reduce; i <n ; i++) {
//		*(arr1+j) = *(q+i);
//		j++;
//	}
//}
//int* reduceArray(int* q, int*&arr1, int &n) {
//	int reduce = 0;
//	cout << "enter the size you wanna reduce : ";
//	cin >> reduce;
//	delete[]arr1;
//	arr1 = new int[n - reduce];
//	copyarr(q, arr1,reduce,n);
//	n = n - reduce;
//	return arr1;
//}
//void print(int* arr1, int n) {
//	for (int i = 0; i < n; i++) {
//		cout << arr1[i] << "\t";
//	}
//}
//int main() {
//	int n = 0;
//	cout << "enter the size of array: ";
//	cin >> n;
//	int* q = new int[n];
//	cout << "Enter the elements of array : ";
//	for (int i = 0; i < n; i++) {
//		cin >> *(q+i);
//	}
//	int* arr1 = new int[n];
//	arr1=reduceArray(q, arr1, n);
//	print(arr1, n);
//
//}