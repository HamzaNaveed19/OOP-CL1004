//#include<iostream>
//using namespace std;
//void input(int **& matrix, const int rows,const int col) {
//	matrix = new int* [rows];
//	for (int i = 0; i < rows; i++) {
//		matrix[i] = new int[col];
//	}
//	cout << "enter the elements of matrix ";
//	for (int i = 0; i < rows; i++) {
//		for (int j = 0; j < col; j++) {
//			cout << i << " row " << j << " col :";
//			cin >> matrix[i][j];
//		}
//	}
//
//}
//void print(int**& matrix, const int& rows, const int& col) {
//	for (int i = 0; i < rows; i++) {
//		for (int j = 0; j < col; j++) {
//			cout  << matrix[i][j] << "\t";
//
//		}cout << endl;
//	}
//}
//int* returnlarger(int** matrix,int rows,int col) {
//	int threshold = 0;
//	cout << "enter the value of threshod value  : ";
//	cin >> threshold;
//	int n = 0;
//	for (int i = 0; i < rows; i++) {
//		for (int j = 0; j < col; j++) {
//			if (matrix[i][j] > threshold)
//				n++;
//
//		}cout << endl;
//	}
//	int* larray = new int[n + 1];
//	int k = 0;
//	larray[n] = -1;
//	for (int i = 0; i < rows; i++) {
//		for (int j = 0; j < col; j++) {
//			if (matrix[i][j] > threshold) {
//				larray[k] = matrix[i][j];
//				k++;
//			}
//
//		};
//	}
//	return larray;
//}int* maxcol(int **matrix,int row,int col) {
//	int* temp = new int[col + 1];
//	temp[col] = -1;
//	for (int i = 0; i < col; i++) {
//		int larg = matrix[i][0];
//		for (int j = 0; j < row; j++) {
//			if (matrix[j][i] > larg) {
//				larg = matrix[j][i];
//			}
//		}
//		temp[i] = larg;
//	}
//	return temp;
//}
//int* maxrow(int** matrix, int row, int col) {
//	int* temp = new int[row + 1];
//	temp[row] = -1;
//	for (int i = 0; i < row; i++) {
//		int larg = matrix[0][i];
//		for (int j = 0; j < col; j++) {
//			if (matrix[i][j] > larg) {
//				larg = matrix[i][j];
//			}
//		}
//		temp[i] = larg;
//	}
//	return temp;
//}
//int ** conactnation(int **table1,int **table2,int r1,int c1,int r2,int c2,bool axis) {
//	if (axis == 0) {
//		int** temp = new int* [r1];
//		for (int i = 0; i < r1; i++) {
//			temp[i] = new int[c1 + c2];
//		}
//		int i = 0, j = 0;
//		for ( i = 0; i < r1; i++) {
//			for (j = 0; j < c1; j++) {
//				temp[i][j] = table1[i][j];
//			}
//		}
//		int m =0, n = 0;
//		for (m; m <r2; m++) {
//			for (n=0; n < c2;n++,j++) {
//				temp[m][j] = table2[m][n];
//
//			}
//			j = r2;
//
//		}
//		return temp;
//	}
//	
//	if (axis == 1) {
//		int** temp = new int* [c1+c2];
//		for (int i = 0; i < c1+c2; i++) {
//			temp[i] = new int[r1];
//		}
//		int i = 0, j = 0;
//		for (i = 0; i < c1; i++) {
//			for (j = 0; j < r1; j++) {
//				temp[i][j] = table1[i][j];
//			}
//		}
//		int m = 0, n = 0;
//		i = 3;
//		for (m = 0; m < r2; m++,i++) {
//			for (n=0 ; n < c2; n++) {
//				temp[i][n] = table2[m][n];
//
//			}
//
//		}
//		return temp;
//	}
//
//
//}
//int main() {
//	int** matrix;
//	int row = 0, col = 0;
//	cout << "enter the size of row : ";
//	cin >> row;
//	cout << "enter the size of column : ";
//	cin >> col;
//	int rn = row, cn = col;
//	input(matrix, row, col);
//	print(matrix, row, col);
//	int* p = returnlarger(matrix, row, col);
//	for (int i = 0; p[i] != -1; i++) {
//		cout << p[i] << "\t";
//	}
//	cout << endl;
//	int *q=maxcol(matrix, row, col);
//	cout << "the largest of eachb row is : ";
//	for (int i = 0; q[i] != -1; i++) {
//		cout << q[i] << "\t";
//	}
//	cout << endl;
//	int* r = maxrow(matrix, row, col);
//	cout << "the largest of each column is : ";
//	for (int i = 0; r[i] != -1; i++) {
//		cout << r[i] << "\t";
//	}
//	cout << endl;
//	bool check = true;
//	cout << "enter 1 or 2 for concatenation :";
//	cin >> check;
//	int** l = conactnation(matrix, matrix, rn,cn,rn,cn,check);
//	for (int i = 0; i < 6; i++) {
//		for (int j = 0; j < 3; j++) {
//			cout << l[i][j] << "\t";
//		}cout << endl;
//	}
//
//}