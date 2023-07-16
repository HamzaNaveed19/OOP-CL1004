//#include<iostream>
//using namespace std;
//
//void initializearray(int*& arr, int& n) {
//	cout << "enter the size of array : ";
//	cin >> n;
//	arr = new int[n];
//
//	for (int i = 0; i < n; i++) {
//		cout << "enter " << i + 1 << " element of array : ";
//		cin >> *(arr + i);
//	}
//	
//
//}
//void growarray(int* &arr, int& n) {
//	int* temp;
//	temp = new int[n + 1];
//	// copying previous data
//	int i = 0;
//	for (i = 0; i < n; i++) {
//		*(temp + i) = *(arr + i);
//	}
//	for (int i = 0; i < n; i++)
//	{
//		cout << *(temp + i) << endl;
//	}
//	delete[]arr;
//	arr = temp;
//	n += 1;
//}
//int* shrinkarray(int* arr, int& n) {
//	int* temp;
//	temp = new int[n - 1];
//	// copying previous data
//	int i = 0;
//	for (i = 0; i < n - 1; i++) {
//		*(temp + i) = *(arr + i);
//	}
//	delete[]arr;
//	arr = temp;
//	n -= 1;
//	return arr;
//}
//void printarray(int* arr, int n) {
//	cout << "the size of the array is " << n << endl;
//	for (int i = 0; i < n; i++) {
//		cout << "the " << i + 1 << " element of array is " << *(arr + i) << endl;
//	}
//}
//
//int main() {
//	int* arr=NULL;
//	int n = 0;
//	bool check = false;
//	cout << "select the menu " << endl;
//	int menu = 0;
//	cout << "1> initialize array " << endl;
//	cout << "2> grow array " << endl;
//	cout << "3> shrink array " << endl;
//	cout << "4> print array " << endl;
//	cin >> menu;
//	while (menu !=-1 ) {
//		if (menu == 1)
//			initializearray(arr, n);
//		if (menu == 2 )
//			growarray(arr, n);
//		if (menu == 3)
//			arr=shrinkarray(arr, n);
//		if (menu == 4 && check == true)
//		printarray(arr, n);
//		cin >> menu;
//	}
//}