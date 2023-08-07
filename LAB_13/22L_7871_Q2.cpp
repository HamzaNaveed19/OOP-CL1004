#include<iostream>
using namespace std;
class faculty {
public:
	faculty(){}
	virtual void print() = 0;
	int GetID() {
		return 101;
	}
};
class Adminitrator:public virtual faculty {
public:
	Adminitrator(){}
	void print() {
		cout << "ADMINISTRATOR class" << endl;
	}
	
};
class teacher:public virtual faculty {

public:
	teacher(){}
	void print() {
		cout << "TEACHER class" << endl;
	}
	
};
class AdministratorTeacher :public Adminitrator , public teacher{
	
public:
	AdministratorTeacher(){}
	void print() {
		cout << "AdministratorTeacher class" << endl;
	}
};
int main() {
	faculty* arr[3];
	arr[0] = new Adminitrator;
	arr[1] = new teacher;
	//arr[2] = new AdministratorTeacher;
	
	//here Error is given because faculty is ambiguous for this class as it has two parents which has same parent class

	// without making Virtual the Print function, the Faculty class was printed twice
	cout << "After making virtaul the print function of parent class faculty" << endl;
	for (int i = 0; i < 2; i++) {
		arr[i]->print();
	}
	cout << "After making the Administrator class Inheritence into Public Virtual we are able to assign the AdminitratorTeacher class pointer of Faculty !" << endl;
	cout << endl;
	//here error was shown that we overriding of print was ambiguous so we have overrided the print in AdministratorTeacher class as well 
	arr[2] = new AdministratorTeacher;
	arr[2]->print();
	//arr[2]->GetId();
	//here error is given because there is no GetID member function in Faculty and because we have made both the teacher and Administrator the virtual public inherited therefore there is an error
	cout << "ID IS : " << arr[2]->GetID() << endl;
	// as there is no error it is because the pointer is of parent class and the fact is that ADministratorTeacher has been also inherited from faculty as faculty is GrandParent for AdministratorTeacher Class
	cout << "PS : All the answers to the questions that has been asked in manual is mentioned in the form of comments in code" << endl;
}