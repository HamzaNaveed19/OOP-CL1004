#include<iostream>
using namespace std;
class set {
	int* data;
	int capacity;
	int noOelements;
	static int count;
public:
	set(int cap = 0) {
		capacity = cap;
		noOelements = 0;
		data = new int[capacity];
		count++;
	}
	set(const set& ref) {
		this->data = new int[capacity];
		this->noOelements = ref.noOelements;
		this->capacity = ref.capacity;
		for (int i = 0; i < ref.noOelements; i++) {
			data[i] = ref.data[i];
		}
	}
	void resize(int newcapacity);
	static int getObjectCount() {
		return count;
	}
	int getcardianality() {
		return noOelements;
	}
	void insert(int element);
	void remove(int element);
	set calcunion(const set& s2);
	set calcintersection(const set& s2);
	set calcdiffer(const set& obj);
	bool ismember(int x) {
		for (int i = 0; i < noOelements; i++) {
			if (data[i] == x)
				return true;
		}
		return false;
	}
	int subset(const set& obj);
	~set() {
		//delete[]data;
		//data = nullptr;
		//count--;
		cout << "object successfully destroyed ! " << endl;
	}
};
int set::count = 0;
void set::resize(int newcapacity) {
	int* temp = new int[newcapacity];
	int i = 0;
	if (newcapacity > capacity) {
		for (i = 0; i < noOelements; i++) {
			temp[i] = data[i];
		}
		cout << "enter the remaining elements of Set : ";
		for (i; i < newcapacity; i++) {
			cin >> temp[i];
		}
		noOelements = i;
	}
	else if (newcapacity < capacity) {
		for (i = 0; i < newcapacity; i++) {
			temp[i] = data[i];
		}

		noOelements = i;
	}
	delete[]data;
	data = temp;
	capacity = newcapacity;
}
void set::insert(int element) {
	bool exist = false;
	for (int i = 0; i < noOelements; i++) {
		if (element == data[i]) {
			exist = true;
			break;
		}
	}
	if (exist) {
		cout << "the element already exist in set ! " << endl;
	}
	else {
		data[noOelements] = element;
		noOelements++;
	}
}
void set::remove(int element) {
	int index = -1;
	for (int i = 0; i < noOelements; i++) {
		if (element == data[i]) {
			index = i;
			break;
		}
	}
	if (index != -1) {
		int* temp = new int[noOelements];
		int j = 0;
		for (int i = 0; i < noOelements; i++) {
			if (data[i] != element) {
				temp[j++] = data[i];
			}
		}
		delete[] data;
		data = temp;
		noOelements--;
	}
	else {
		cout << "element not found ! " << endl;
	}
}
set set::calcunion(const set& s2) {
	int m = noOelements;
		for (int i = 0; i <= s2.noOelements; i++) {
		bool found = false;
		for (int j = 0; j <= noOelements; j++) {
			if (s2.data[i] == data[j]) {
				found = true;
				break;
			}
		}
		if (!found) {
			m++;
		}
	}
		set s3(m);
	m = 0;
	for (int i = 0; i <= noOelements; i++) {
		s3.data[m++] = data[i];
	}
	for (int i = 0; i <= s2.noOelements; i++) {
		bool found = false;
		for (int j = 0; j <= noOelements; j++) {
			if (s2.data[i] == data[j]) {
				found = true;
				break;
			}
		}
		if (!found) {
			s3.data[m++] = s2.data[i];
		}
	}
	return s3;
}
set set::calcintersection(const set& s2) {
	int n = 0;
	for (int i = 0; i <= noOelements; i++) {
		for (int j = 0; j <= s2.noOelements; j++) {
			if (data[i] == s2.data[j]) {
				n++;
				break;
			}
		}
	}
	set s4(n);
	s4.noOelements = n;
	n = 0;
	for (int i = 0; i <= noOelements; i++) {
		for (int j = 0; j <= s2.noOelements; j++) {
			if (data[i] == s2.data[j]) {
				s4.data[n++] = data[i];
			}
		}
	}
	return s4;
}
set set::calcdiffer(const set& obj) {
	int n = 0;
	bool isfound = false;
	for (int i = 0; i <= noOelements; i++) {
		isfound = false;
		for (int j = 0; j <= obj.noOelements; j++) {
			if (data[i] == obj.data[j]) {
				isfound = true;
				break;
			}
		}
		if (!isfound) {
			n++;
		}
	}
	set s5(n);
	s5.noOelements = n;
	n = 0;
	for (int i = 0; i <= noOelements; i++) {
		isfound = false;
		for (int j = 0; j <= obj.noOelements; j++) {
			if (data[i] == obj.data[j]) {
				isfound = true;
				break;
			}
		}
		if (!isfound) {
			s5.data[n++] = data[i];
		}
	}
	return s5;
}
int set::subset(const set&obj){
	int n = 0;
	for (int i = 0; i < noOelements; i++) {
		for (int j = 0; j < obj.noOelements; j++) {
			if (data[i] == obj.data[j]) {
				n++;
				break;
			}
		}
	}
	if (n != noOelements) {
		return 0;
	}
	else if (n == noOelements && n == obj.noOelements) {
		return 2;
	}
	else if (n == noOelements && n != obj.noOelements) {
		return 1;
	}
}

int main() {
	int a, b;
	cout << "enter the size of 1st object : ";
	cin >> a;
	cout << "enter the size of 2nd object : ";
	cin >> b;
	set s1(a), s2(b);
	int c = 0;
	for (int i = 0; i < a; i++) {
		cin >> c;
		s1.insert(c);
	}
	cout << "enter elements of s2 " << endl;
	for (int i = 0; i < b; i++) {
		cin >> c;
		s2.insert(c);
	}
	cout << "enter the new capacity :";
	cin >> c;
	s1.resize(c);
	cout << "enter the new capacity of 2nd obj :";
	cin >> c;
	s2.resize(c);
	cout << "enter the elements to reomve : ";
	cin >> c;
	s1.remove(c);
	cout << "the return count is " << s1.getObjectCount() << endl;
	cout << "the no of elements of set 1 is " << s1.getcardianality() << endl;
	cout << "the no of elements of set 2 is " << s2.getcardianality() << endl;
	set s3(s1.calcunion(s2));
	set s4(s1.calcintersection(s2));
	set s5(s3.calcdiffer(s4));
	cout << "enter the element u wanna search in S1 : ";
	int x = 0;
	cin >> x;
	if (s1.ismember(x)) {
		cout << "element found ! " << endl;
	}
	else {
		cout << "not found!" << endl;
	}
	cout << "enter the element u wanna search in S2 : ";
	cin >> x;
	if (s2.ismember(x)) {
		cout << "element found ! " << endl;
	}
	else {
		cout << "not found!" << endl;
	}
	 x = s1.subset(s2);
	if (x == 0) {
		cout << "not a subset ";
	}
	else if (x == 1) {
		cout << "proper subset";

	}
	else if (x == 2) {
		cout << "improper subset ";
	}
}