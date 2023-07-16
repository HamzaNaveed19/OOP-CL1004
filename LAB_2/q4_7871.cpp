//#include<iostream>
//using namespace std;
//void growarr(int* &arr, int& n) {
//	int* temp = new int[2 * n];
//	for (int i = 0; i < n; i++) {
//		*(temp + i) = *(arr + i);
//	}
//	delete[]arr;
//	arr = temp;
//	n = n * 2;
//}
//void input(int* &arr, int& n) {
//	for (int i = 0; i < n; i++) {
//		cin >> *(arr + i);
//		if (arr[i] == -1) {
//			n = i;
//			break;
//		}
//		if (i = n - 1) {
//			growarr(arr, n);
//		}
//	}
//
//}
//int main() {
//	int n = 5;
//	int* arr = new int[n];
//	input(arr, n);
//	for (int i = 0; i < n; i++) {
//		cout << arr[i] << "\t";
//	}
//
//}