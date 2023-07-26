#include<iostream>
using namespace std;
class rationalnumber {
	int numerator;
	int denominator;
public:
	rationalnumber(int num = 1, int denom = 1) {
		if (denom == 0) {
			cout << "denominator cannot be 0!";
			cin >> denom;
		}
		numerator = num;
		denominator = denom;
	}
	friend istream& operator >>(istream& input, rationalnumber& obj);
	friend ostream& operator <<(ostream& input, rationalnumber& obj);
	rationalnumber operator +(rationalnumber& obj);
	rationalnumber operator -(rationalnumber& obj);
	bool operator ==(rationalnumber& obj);
	void operator ++();
	void operator --(int);
};
istream& operator >>(istream& input, rationalnumber& obj) {
	cout << "enter the data : ";
	input >> obj.numerator;
	cout << "enter the data : ";
	input >> obj.denominator;
	return input;
}
ostream& operator <<(ostream& output, rationalnumber& obj) {
	cout << "the rational number is : " << obj.numerator << "/" << obj.denominator << endl;
	return output;
}
rationalnumber rationalnumber::operator+(rationalnumber& obj) {
	rationalnumber temp;
	temp.denominator = denominator * obj.denominator;
	temp.numerator = (numerator * obj.denominator) + (obj.numerator * denominator);
	return temp;
}
rationalnumber rationalnumber::operator-(rationalnumber& obj) {
	rationalnumber temp;
	temp.denominator = denominator * obj.denominator;
	temp.numerator = (numerator * obj.denominator) - (obj.numerator * denominator);
	return temp;
}
bool  rationalnumber::operator==(rationalnumber& obj) {
	if (numerator == obj.numerator && denominator == obj.denominator) {
		return true;
	}
	return false;
}
void  rationalnumber::operator ++() {
	numerator = numerator + (1 * denominator);
	denominator = denominator;
}
void rationalnumber::operator --(int) {
	numerator = numerator - (1 * denominator);
	denominator = denominator;
}
int main() {
	rationalnumber r1;
	rationalnumber r2(5, 6);
	rationalnumber r3;
	cout << "input rational number: ";
	cin >> r3;
	cout << r1 << r2 << r3 << endl;
	if (r1 == r2) {
		cout << "r1==r2" << endl;
	}
	else
	{
		cout << "r1!=r2" << endl;
	}
	rationalnumber r4 = r2 - r3;
	cout << r4 << endl;
	rationalnumber r5 = r2 + r3;
	cout << r5 << endl;
	++r4;
	cout << r4 << endl;
	r5--;
	cout << r5 << endl;

}