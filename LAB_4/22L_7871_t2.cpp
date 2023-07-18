//#include<iostream>
//using namespace std;
//class myvector {
//	int* arrptr;
//	int capacity = 0;
//	int currentsize = 0;
//public:
//	myvector() {
//		arrptr = new int[2];
//		arrptr[0] = 0;
//		capacity = 2;
//		currentsize = 2;
//		cout << "default construcor was called" << endl;
//	}
//	myvector(int size) {
//		arrptr = new int[size];
//		for (int i = 0; i < size; i++) {
//			arrptr[i] = 0;
//		}
//		capacity = size;
//		currentsize = 2;
//	}
//	~myvector() {
//		delete[]arrptr;
//		cout << "destroyed constructor !" << endl;
//	}
//	void getfunction();
//
//};
//void myvector::getfunction() {
//	cout << "capacity is " << capacity << endl;
//}
//int main() {
//	myvector v1;
//	v1.getfunction();
//	myvector v2(4);
//	v2.getfunction();
//}