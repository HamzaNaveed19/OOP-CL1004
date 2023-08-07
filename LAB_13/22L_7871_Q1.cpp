#include<iostream>
using namespace std;
class Person {
	string FullName;
	int Height;
public:
	Person(string n = "Babar Azam", int h = 6) {
		FullName = n;
		Height = h;
	}
	virtual void PrintInfo() {
		cout << "Name : " << FullName << endl;
		cout << " Height : " << Height << endl;
	}
	virtual ~ Person() {
		cout << "Destructor Of Person called! " << endl;
	}
};
class Employee :public Person {
	string department;
	int Id;
public:
	Employee(string n = "Babar Azam", int h = 6, string Dep = "CS", int id = 201) :Person(n, h) {
		department = Dep;
		Id = id;
	}
	void PrintInfo()override {
		cout << "this is a derived class !" << endl;
		cout << "Department name : " << department << endl;
		cout << "Department ID : " << Id << endl;
	}
	~Employee(){
		cout << "Destructor of Employee was called !" << endl;

	}
};

class Student :public Person {
	string SchoolName;
	int Id;
public:
	Student(string n = "Babar Azam", int h = 6, string School = "PCB") :Person(n, h) {
		SchoolName = School;
	}
	void PrintInfo()override {
		cout << "this is a derived class !" << endl;
		cout << "School  Name : " << SchoolName << endl;
	}
	~Student() {
		cout << "Destructor of Student was called !" << endl;

	}
};
int main() {
	Person* arr[2];
	arr[0] = new Employee;
	arr[1] = new Student;
	for (int i = 0; i < 2; i++) {
		arr[i]->PrintInfo();
	}
	delete arr[0];
	delete arr[1];

}