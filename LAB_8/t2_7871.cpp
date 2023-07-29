//#include<iostream>
//#include<vector>
//#include<string>
//using namespace std;
//class book {
//	static int sr_no;
//	string title;
//	string author;
//	int year;
//public:
//	book() {
//		sr_no++;
//		cout << "enter data for book " << sr_no << endl;
//		cout << "enter the name of the BOOK : ";
//		cin.ignore();
//		getline(cin, title);
//		cout << "enter the author of the BOOK : ";
//		cin.ignore();
//		getline(cin, author);
//		cout << "enter the year of the BOOK : ";
//		cin >> year;
//	}
//	string gettitle() {
//		return title;
//	}
//	string getauthor() {
//		return author;
//	}
//	int getyear() {
//		return year;
//	}
//};
//int book::sr_no = 0;
//class library {
//	static int book_count;
//	vector<book> vec;
//public:
//	void addbook(const book& obj) {
//		vec.push_back(obj);
//		book_count++;
//	}
//	void display() {
//		for (int i = 0; i < book_count; i++) {
//			cout << "\n" << i + 1 << endl;
//			cout << "TITLE  : " << vec[i].gettitle() << endl;
//			cout << "AUTHOR : " << vec[i].getauthor() << endl;
//			cout << "YEAR   : " << vec[i].getyear() << endl;
//			cout << "_____________________________________________" << endl;
//		}
//	}
//};
//int library::book_count = 0;
//int main() {
//	library l1;
//	book b1;
//	l1.addbook(b1);
//	book b2;
//	l1.addbook(b2);
//	book b3;
//	l1.addbook(b3);
//	l1.display();
//	system("pause");
//}