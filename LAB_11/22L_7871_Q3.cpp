//#include<iostream>
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
//	const int size = 2;
//	Animal* myPets[size];
//	Cat whiskers;
//	Dog mutley;
//	myPets[0] = &whiskers;
//	myPets[1] = & mutley;
//	for (int i = 0; i < size; i++)
//		cout<<myPets[i]->speak()<< endl;
//}