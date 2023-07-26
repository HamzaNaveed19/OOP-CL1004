#include<iostream>
using namespace std;
//int set :: count= 0;
class set {
	int* data;
	int capacity;
	int NoOfElements;
	 int count=0;
public:
	set(int capacity = 0) {
		this->capacity = capacity;
		NoOfElements = 0;
		data = new int[capacity];
		count++;
	}
	void getdata() {
		for (int i = 0; i < capacity; i++, NoOfElements++) {
			cin >> data[i];
		}
	}
	set(const set& ref) {
		this->data = new int[ref.capacity];
		this->NoOfElements = ref.NoOfElements;
		for (int i = 0; i < ref.NoOfElements; i++) {
			data[i] = ref.data[i];
		}
	}
	void resize(int newcapacity) {
		int* temp = new int[newcapacity];
		int i = 0;
		if (newcapacity > capacity) {
			for (i = 0; i < NoOfElements; i++) {
				temp[i] = data[i];
			}
			cout << "enter the remaining elements opf set : ";
			for (i; i < newcapacity; i++) {
				cin >> temp[i];
			}
			NoOfElements = i;
		}
		else {
			for (i = 0; i < newcapacity; i++) {
				temp[i] = data[i];
			}
			NoOfElements = i;
		}
		delete[]data;
		data = temp;
		capacity = newcapacity;
	}
	 int getobjects() {
		return count;
	}
	int operator [](int n){
		if (n >= 0 && n < NoOfElements) {
			return data[n];
		}
	}
	void operator ++(int) {
		for (int i = 0; i < NoOfElements; i++) {
			data[i] = data[i] + 1;
		}
	}
	void operator ++() {
		for (int i = 0; i < NoOfElements; i++) {
			data[i] = data[i] + 1;
		}
	}
	void operator --(int) {
		for (int i = 0; i < NoOfElements; i++) {
			data[i] = data[i] - 1;
		}
	}void operator --() {
		for (int i = 0; i < NoOfElements; i++) {
			data[i] = data[i] - 1;
		}
	}
	set operator +(int &n) {
		set temp(NoOfElements);
		for (int i = 0; i < NoOfElements; i++) {
			temp.data[i] = data[i];
		}
		for (int i = 0; i < NoOfElements; i++) {
			temp.data[i] = temp.data[i] + n;
		}
		return temp;
	}
};
int main() {
	set obj1(5);
	obj1.getdata();
	int n = 0;
	cout << "enter n";
	cin >> n;
	set obj2=obj1+n;
	for (int i = 0; i < 5; i++) {
		cout << obj2[i] << "\t";
	}cout << endl;
	obj1++;
	for (int i = 0; i < 5; i++) {
		cout << obj1[i] << "\t";
	}cout << endl;
	obj1--;
	for (int i = 0; i < 5; i++) {
		cout << obj1[i] << "\t";
	}cout << endl;
	return 0;
}