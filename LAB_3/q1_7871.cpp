#include<iostream>
#include<string>
using namespace std;
void concatenate(char*& c1, char* c2,int& s1,int s2) {
	char* temp = new char[s1 + s2];
	int i = 0;
	for ( i = 0; i < s1; i++) {
		temp[i] = c1[i];
	}
	temp[i] = ' ';
	i++;
	for (int j=0 ; j < s2; j++) {
		temp[i] = c2[j];
		i++;
	}
	s1 = i;
	delete[]c1;
	c1 = temp;

}
int main() {
	string c1, c2;
	cout << "enter string 1: ";
	getline(cin, c1);
	cout << "enter string 1: ";
	getline(cin, c2);
	int s1 = c1.length() + 1;
	int s2 = c2.length() + 1;
	char* char1 = new char[s1];
	char* char2 = new char[s2];
	char1[s1 - 1] = '\0';
	char2[s2 - 1] = '\0';
	for (int i = 0; i < s1; i++) {
		char1[i] = c1[i];
	}
	for (int i = 0; i < s2; i++) {
		char2[i] = c2[i];
	}
 concatenate(char1,char2,s1,s2);
	for (int i = 0; i < s1; i++) {
		cout << char1[i];
	}
}