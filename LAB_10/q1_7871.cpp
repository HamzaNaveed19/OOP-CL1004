#include<iostream>
#include<string>
using namespace std;
/* There are two types of persons in the university i.e. Student and Faculty
 Every Person has some basic information that is common to all persons i.e. the
first_name and last_name stored as private attributes and age which is a protected
attribute.
 A student can in turn be either an Undergraduate or a Graduate student, every student has
a cgpa.
 An undergraduate student has a fyp_name as his private attribute.
 A graduate student has a thesis topic as his private attribute.
 A faculty member has private attributes about the number of courses he is currently
teaching, i.e. his course_count and a three digit telephone extension number.*/
class person {
	string first_name;
	string last_name;
protected:
	int age;
public:
	person(string f_name = "abcd", string l_name = "xyz", int x=10) {
		first_name = f_name;
		last_name = l_name;
		age = x;
		cout << "person called" << endl;

	}
	~person()
	{
		cout << "destructor of person was called ! " << endl;
	}
	void setF_name(string name) {
		first_name = name;
	}
	void setL_name(string name) {
		last_name = name;
	}
	void setF_name(int x) {
		age = x;
	}
	string getF_name(){
		return first_name;
	}
	string getL_name() {
		return last_name;
	}
	int getAge() {
		return age;
	}
	void printInfo() {
		cout << "name : " << first_name << " " << last_name << endl;
		cout << "age : " << age << endl;
	}

};
class student: public person {
	float cgpa;
public:
	student(string f_name = "abcd", string l_name = "xyz", int x = 25, float cgpa = 3.0):person(f_name,l_name,x) {
		this->cgpa = cgpa;
		cout << "student called" << endl;
	}
	~student()
	{
		cout << "destructor of person was called ! " << endl;
	}
	float getCGPA() {
		return cgpa;
	}
	void setCGPA(float x) {
		cgpa = x;
	}
	void printStudent() {
		cout << getF_name() << " " << getL_name() << " is " << getAge() << " old ,his cgpa is " << cgpa << endl;
	
	}
};
////yes i was getting the error but i have resolved that it was due to public and protected data members
class undergraduate :public student {
	string fyp_name;
public:
	undergraduate(string p_name="sudoku",string f_name = "abcd", string l_name = "xyz", int x = 25, float cgpa = 3.0):student(f_name ,l_name ,x,cgpa) {
		fyp_name = p_name;
	}
	string getFYP_name() {
		return fyp_name;
	}
	void setFYPname(string name) {
		fyp_name = name;
	}
	~undergraduate()
	{
		cout << "destructor of undergraduate was called ! " << endl;
	}
};
class graduated :public student {
	string thesis;
public:
	graduated(string thesis = "sudoku",string f_name = "abcd", string l_name = "xyz", int x = 25, float cgpa = 3.0) :student(f_name, l_name, x, cgpa) 
	{
		this->thesis = thesis;
	}
	string getThesis() {
		return thesis;
	}
	void setThesis(string name) {
		thesis = name;
	}
	void printgraduate() {
		printStudent();
		cout << "Project : " << thesis << endl;
	}
	~graduated()
	{
		cout << "destructor of graduated was called ! " << endl;
	}
};
class faculty: public person {
	int no_of_courses;
	int tel_ext;
public:
	faculty(string f_name = "abcd", string l_name = "xyz", int x = 10,int y= 5, int no = 456):person(f_name, l_name, x)
	{
		no_of_courses = y;
		tel_ext = no;
	}
	int getNoOfcourses(){
		return no_of_courses;
	}
	int gettel() {
		return tel_ext;
	}
	void SetNoOfcourses(int x) {
		no_of_courses = x;
	}
	void SetTelext(int x) {
		tel_ext = x;
	}
	void printfaculty() {
		cout << "Faculty member name: " << getF_name() << " " << getL_name() << "\n age : " << getAge() << "\n no of courses: " << no_of_courses << "\n telephone number :  " << tel_ext << endl;
	}
	~faculty()
	{
		cout << "destructor of faculty was called ! " << endl;
	}
};
int main() {
	undergraduate u1("", "ted", "thompson", 22, 3.91);
	faculty f1("richard", "karp", 45, 2, 420);
	graduated g1("Distribu7ted Algorithms","Arnold","gated",25,3.01);
	u1.printStudent();
	g1.printgraduate();
	//when i changed the public to protected i was getting the error inaccesible printStudent method
	//when i changed the public to private i was getting the error inaccesible printStudent method again beacuse undergradaute usues private to  inherit from student
	f1.printfaculty();
}