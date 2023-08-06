//#include<iostream>
//using namespace std;
//class Media {
//public:
//	virtual string getType() = 0;
//	virtual string getinfo() = 0;
//	virtual string getTitle() final {
//		return "hamza";
//	}
//};
//
//class Book :public Media{
//	string title, author;
//public:
//	Book(string n="C++",string a="tonyGeddis") {
//		title = n;
//		author = a;
//
//	}
//	/*string getTitle() {
//		return title;
//	}*/
//
//	// this will give error as final keyword has been written on the base class so it cannot be override
//	string getAuthor() {
//		return author;
//	}
//	string getType()override {
//		return title;
//	}
//	string getinfo()override {
//		return author;
//	}
//};
//class Movie:public Media {
//	string title, director;
//public:
//	Movie(string n = "Interstellar", string a = "Christopher") {
//		title = n;
//		director = a;
//
//	}
//	/*string getTitle() {
//		return title;
//	}*/
//// this will give error as final keyword has been written on the base class so it cannot be override
//	string getAuthor() {
//		return director;
//	}
//	string getType()override {
//		return title;
//	}
//	string getinfo()override {
//		return director;
//	}
//};
//int main()
//{
//	Book b1;
//	Movie m1;
//	cout << "Book name: " << b1.getType() << endl;
//	cout << "Book Author: " << b1.getinfo() << endl;
//	cout << "Movie name: " << m1.getType() << endl;
//	cout << "Movie Director: " << m1.getinfo() << endl;
//
//}
//
