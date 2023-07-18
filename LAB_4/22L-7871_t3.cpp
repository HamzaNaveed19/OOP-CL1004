//#include<iostream>
//#include<string>
//using namespace std;
//class student {
//	string name;
//	string roll_no;
//	string CNIC;
//	string degree;
//	string address;
//public:
//	student() {
//		name = "student abc";
//		roll_no = "22L-XXXX";
//		CNIC = "35200-XXXXXXX-Y";
//		degree = "BS-SE";
//		address = "abcd lahore";
//	
//	}
//	void input();
//	void print();
//	void setname(string n);
//	void setrollno(string n);
//	void setcnic(string n);
//	void setdegree(string n);
//	void setaddress(string n);
//	string getname();
//	string getrollno();
//	string getcnic();
//	string getaddress();
//	string getdegree();
//};
//void student::input() {
//	cout << "enter your name plz: ";
//	getline(cin, name);
//	cout << "enter your rollno plz: ";
//	getline(cin, roll_no);
//	cout << "enter your cnic plz: ";
//	getline(cin, CNIC);
//	cout << "enter your degree plz: ";
//	getline(cin, degree);
//	cout << "enter your addrss plz: ";
//	getline(cin, address);
//
//}
//void student::print() {
//	cout << "Name : " << name << endl;
//	cout << "rollno : " << roll_no << endl;
//	cout << "CNIC : " << CNIC<< endl;
//	cout << "degree : " << degree << endl;
//	cout << "address:  " << address << endl;
//}
//void student::setname(string n) {
//	name = n;
//}
//void student::setrollno(string n) {
//	roll_no = n;
//}
//void student::setcnic(string n) {
//	CNIC = n;
//}
//void student::setdegree(string n) {
//	degree = n;
//}
//void student::setaddress(string n) {
//	address = n;
//}
//string student::getname() {
//	return name;
//}
//string student::getrollno() {
//	return roll_no;
//}
//string student::getcnic() {
//	return CNIC;
//}
//string student::getdegree() {
//	return degree;
//}
//string student::getaddress() {
//	return address;
//}
//int main() {
//	student s1;
//	s1.input();
//	s1.print();
//	string n;
//	cout << "enter the name u wanna set : ";
//	s1.setname(n);
//	getline(cin, n);
//	cout << "enter the roll no u  wanna  set : ";
//	getline(cin, n);
//	s1.setrollno(n);
//	cin.ignore();
//	cout << "enter the cnic u wanna set : ";
//	getline(cin, n);
//	s1.setcnic(n);
//	cin.ignore();
//	cout << "enter the degree u wanna set : ";
//	getline(cin, n);
//	s1.setdegree(n);
//	cin.ignore();
//	cout << "enter the name u wanna set : ";
//	getline(cin, n);
//	s1.setaddress(n);
//	cin.ignore();
//	cout << "the updated data is :" << endl;
//	s1.print();
//}