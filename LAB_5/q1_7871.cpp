#include<iostream>
using namespace std;
class matrix {
	int** matr;
	int rows;
	int col;
public:
	matrix() {
		matr = nullptr;
		rows = 0;
		col = 0;
	}
	void setter() {
		int x = 0;
		cout << "enter the size :";
		cin >> x;
		rows = x;
		col = x;
		matr = new int* [x];
		for (int i = 0; i < rows; i++) {
			matr[i] = new int[col];
		}
	}
	int getter() {
		return rows;
	}
	void inputmatrix(int rows);
	void displaymatrix( int rows);
	void rotate( int rows);
	~matrix() {
		delete[]matr;
		matr = nullptr;
		cout << "destructor was called and memory successfully de-allocated\n";
	}

};
void matrix::inputmatrix( int rows) {
	cout << "enter elements of array: " << endl;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < rows; j++) {
			cout << i << "th row " << j << "th column :";
			cin >> matr[i][j];
		}
	}
}
void matrix::displaymatrix( int rows) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < rows; j++) {
			cout << matr[i][j] << "\t";
		}
		cout << endl;
	}
}
void matrix::rotate(int rows) {
	int temp = matr[rows - 1][0];
	int store = 0;
	int j = 0;
	for (int i = rows-1; i >0; i--) {
		matr[i][j] = matr[i - 1][j];

	}
	j = rows - 1;
	store = matr[rows - 1][1];
	matr[rows - 1][1] = temp;
	temp = matr[rows - 1][rows - 1];
	int i = rows - 1;
	for (i = rows-1; i>2; i--) {
		matr[j][i] = matr[j][i-1];
	}
	matr[j][i] = store;
	store = matr[rows - 2][rows - 1];
	matr[rows - 2][rows - 1] = temp;
	temp = matr[0][j];
	for (i =0; i+1 < rows-2; i++) {
		matr[i][j] = matr[i + 1][j];
	}
	matr[i][j] = store;
	j = 0;
	store = matr[0][rows - 2];
	matr[0][rows - 2] = temp;
	for (i= 0; i+1 < rows - 2; i++) {
		matr[j][i] = matr[j][i + 1];
	}
	matr[j][i] = store;
}

int main() {
	matrix matrx;
	matrx.setter();
	int size = matrx.getter();
	matrx.inputmatrix(size);
	matrx.displaymatrix(size);
	matrx.rotate(size);
	cout << "*_*_*_*_*_*_*_*_*_*_*_*_*" << endl;
	cout << "after the rotation the matrix is : " << endl;
	matrx.displaymatrix(size);

}