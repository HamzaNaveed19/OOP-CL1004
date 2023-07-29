//#include<iostream>
//using namespace std;
//class engine {
//	bool status;
//public:
//	void setStatus(bool& status) {
//		this->status = status;
//	}
//	void displayStatus() {
//		if (status) {
//			cout << "The Car's Engine is Switched On!" << endl;
//		}
//		else {
//			cout << "The Car's Engine is OFF !" << endl;
//		}
//	}
//};
//class Car {
//	engine obj;
//public:
//	void StartEngine() {
//		cout << "enter 0 to off the car or any other number to switch on the Car !";
//		bool status;
//		cin >> status;
//		obj.setStatus(status);
//		obj.displayStatus();
//	}
//};
//int main() {
//	Car obj;
//	obj.StartEngine();
//	system("pause");
//
//}