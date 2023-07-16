//#include<iostream>
//using namespace std;
//void fillarray(int*& arr, int& n) {
//	cout << "enter the elements of array " << endl;
//	for (int i = 0; i < n; i++) {
//		cin >> arr[i];
//	}
//}
//void forarray_1(int*& C, int*& A, int &start, int &end,int M) {
//	for (int i = 0; i < M; i++) {
//		if (A[i] % 2 == 0) {
//			C[start] = A[i];
//			start++;
//		}
//		else {
//			C[end] = A[i];
//			end--;
//		}
//	}
//}void forarray_2(int*& C, int*& B, int& start, int& end, int N) {
//	for (int i = 0; i < N; i++) {
//		if (B[i] % 2 == 0) {
//			C[start] = B[i];
//			start++;
//		}
//		else {
//			C[end] = B[i];
//			end--;
//		}
//	}
//}
//
//
//int main() {
//	int M, N;
//	cout << "enter the size of array A : ";
//	cin >> M;
//	cout << "enter the size of array B : ";
//	cin >> N;
//	int* A = new int [M];
//	int* B = new int [N];
//	int end = M + N-1;
//	int start = 0;
//	fillarray(A, M);
//	fillarray(B, N);
//	int* C = new int[M + N];
//	forarray_1(C, A, start, end, M);
//	forarray_1(C, B, start, end, N);
//	for (int i = 0; i < M + N;i++) {
//		cout << C[i] << "\t";
//	}
//	delete[] A;
//	delete[] B;
//	delete[]C;
//
//}