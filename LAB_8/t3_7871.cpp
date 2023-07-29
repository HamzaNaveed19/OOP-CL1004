//#include<iostream>
//#include<vector>
//#include<string>
//using namespace std;
//
//class courses;
//class students {
//	string name;
//	string student_ID;
//	vector <courses*> crs;
//public:
//	students(string name = "Hamza", string S_Id = "22L-7871") {
//		this->name = name;
//		this->student_ID = S_Id;
//	}
//	void enrollCourses(courses* course);
//	void displayCourses();
//	string getName();
//	string getID();
//};
//class courses {
//	string name;
//	string course_ID;
//	vector<students*> stud;
//public:
//	courses(string name = "OOP", string c_code = "cs1001") {
//		this->name = name;
//		this->course_ID = c_code;
//	}
//	void enrollStudents(students* student) {
//		stud.push_back(student);
//	}
//	void displayStudents() {
//		cout << "Course " << name << " with course code : " << course_ID << " has been registered by : " << endl;
//		for (int i = 0; i < stud.size(); i++) {
//			cout << "NAME :  " << stud[i]->getName() << "  \t STUDENT ID : " << stud[i]->getID() << endl;
//		}
//	}
//	string getCName() {
//		return name;
//	}
//	string getCID() {
//		return course_ID;
//	}
//};
//
//void students :: enrollCourses(courses* course) {
//	crs.push_back(course);
//}
//void students::displayCourses() {
//	cout << "Name : " << name << " with Student ID : " << student_ID << " has  registered Courses : " << endl;
//	for (int i = 0; i < crs.size(); i++) {
//		cout << "COURSE : " << crs[i]->getCName() << "  \t Course Code : " << crs[i]->getCID() << endl;
//	}
//}
//string students::getName() {
//	return name;
//}
//string students:: getID() {
//	return student_ID;
//}
//int main() {
//	students s1("hamza", "7871");
//	students s2("talha", "7888");
//	courses c1("OOP", "CS1001");
//	c1.enrollStudents(&s1);
//	c1.enrollStudents(&s2);
//	c1.displayStudents();
//	s1.enrollCourses(&c1);
//	s1.displayCourses();
//	s2.displayCourses();
//	system("pause");
//}