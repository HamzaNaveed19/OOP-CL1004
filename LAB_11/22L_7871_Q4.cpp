//#include<iostream>
//#include<conio.h>
//#include<string>
//using namespace std;
//class Animal {
//public:
//	string message;
//	Animal() {
//		message = "MESSAGE";
//	}
//	virtual string speak() {
//		return "Speak() called ";
//	}
//};
//class Dog : public Animal {
//public:
//	Dog() :Animal() {
//	}
//	string speak() {
//		return "woof";
//	}
//};
//class Cat :public Animal {
//public:
//	Cat() :Animal() {
//	}
//	string speak() {
//		return "Meowww";
//	}
//
//};
//int main() {
//	const int size = 5;
//	Animal* myPets[size];
//	int i = 0;
//	while (i< size)
//	{
//		cout<< "Press 1 for a Dog and 2 for a Cat"<< endl;
//		switch (_getch())
//		{
//			case '1' :
//				myPets[i] = new Dog;
//				cout << " Dog added at position " << i << endl<< endl;
//				i++;
//				break;
//				case '2':
//					myPets[i] = new Cat;
//					cout<<" Cat added at position "<<i<<endl<< endl;
//					i++;
//					break;
//				default:
//					cout << " Invalid input.Enter again. " << endl<< endl;
//					break;
//
//		}
//	}
//}