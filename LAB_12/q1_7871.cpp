//#include<iostream>
//using namespace std;
//class Shape
//{
//public:
//	virtual double area() = 0;
//	virtual double perimeter() = 0;
//};
//
//class Rectangle : public Shape
//{
//public:
//	Rectangle(double width, double height) :
//		width(width), height(height)
//	{}
//	double area() override
//	{
//		return width * height;
//	}
//
//	double perimeter()override {
//		return 2 * (width + height);
//	}
//private:
//	double width, height;
//};
//
//class Circle : public Shape
//{
//public:
//	Circle(double radius) :
//		radius(radius)
//	{}
//	double area() override
//	{
//		return 3.14159265 * radius * radius;
//	}
//	double perimeter() override
//	{
//		return 2 * 3.14159265 * radius;
//	}
//private:
//	double radius;
//};
//int main() {
//
//	Rectangle obj(3, 5);
//	cout <<"Area : " <<obj.area() << endl;
//	cout <<"Perimter: " <<obj.perimeter() << endl;
//	Shape* arr[7];
//	for (int i = 0; i < 5; i++) {
//		arr[i] = new Rectangle(i + 1, i + 2);
//	}
//	for (int i = 0; i < 5; i++) {
//		cout << " Shape " << i + 1 << " : ";
//		cout << "Area : " << arr[i]->area() << endl;
//		cout << "Perimter: " << arr[i]->perimeter() << endl;
//
//		
//	}
//	cout << "after adding two objects of Circle : " << endl;
//	arr[5] = new Circle(5);
//	arr[6] = new Circle(10);
//	for (int i = 0; i < 7; i++) {
//		cout << " Shape " << i + 1 << " : ";
//		cout << "Area : " << arr[i]->area() << endl;
//		cout << "Perimter: " << arr[i]->perimeter() << endl;
//
//
//	}
//
//}