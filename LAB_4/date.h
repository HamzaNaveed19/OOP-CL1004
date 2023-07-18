#pragma once
#include<iostream>
using namespace std;
class date {
	int day;
	int year;
	int month;
public:
	date() {
		day = 1;
		month = 1;
		year = 1926;
		cout << "dafault constructor was called  " << endl;
	}
	void print();
	date(int a, int b, int c) {
		cout << "overloaded constructor was called " << endl;
		day = a ;
		month = b;
		year = c;
	}
	void input();
	void setday(int x);
	void setmonth(int x);
	void setyear(int x);
	int getyear();
	int getday();
	int getmonth();
};