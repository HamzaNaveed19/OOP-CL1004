//#include<iostream>
//using namespace std;
//template<typename T>
//class GrowableArray
//{
//	T* Data;
//	int size;
//public:
//	GrowableArray();
//	GrowableArray(int S);
//	GrowableArray(string fn);
//	void Load(string fn);
//	void Print(const char* Msg)const;
//	void insertAtEnd(T V);
//	T operator[](int index);
//	~GrowableArray()
//	{
//		delete[] this->Data;
//	}
//};
//template<typename T>
//GrowableArray<T> ::GrowableArray()
//{
//	Data = NULL;
//	size = 0;
//}
//
//template<typename T>
//void GrowableArray<T>::insertAtEnd(T V)
//{
//	T* temp;
//	temp = new T[this->size + 1];
//	for (int i = 0; i < size; i++)
//	{
//		temp[i] = this->Data[i];
//	}
//	temp[this->size] = V;
//	this->size++;
//	delete[]this->Data;
//	this->Data = temp;
//}
//
//template<typename T>
//void GrowableArray<T>::Print(const char* Msg)const
//{
//	cout << Msg << " { ";
//	for (int i = 0; i < size; i++)
//	{
//		cout << Data[i] << " ";
//	}
//	cout << "}" << endl;
//}
//
//template<typename T>
//GrowableArray<T>::GrowableArray(int s)
//{
//	size = s;
//	Data = new T[size];
//}
//
//template<typename T>
//GrowableArray<T>::GrowableArray(string s)
//{
//	size = 0;
//	while (s[size] != '\0')
//	{
//		size++;
//	}
//	Data = new T[size];
//	for (int i = 0; i < size; i++)
//	{
//		Data[i] = s[i];
//	}
//}
//
//template<typename T>
//void GrowableArray<T>::Load(string s)
//{
//	size = 0;
//	while (s[size] != '\0')
//	{
//		size++;
//	}
//	Data = new T[size];
//	for (int i = 0; i < size; i++)
//	{
//		Data[i] = s[i];
//	}
//}
//
//template<typename T>
//T GrowableArray<T> :: operator[](int index)
//{
//	if (index >= 0 && index < size)
//	{
//		return Data[index];
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//
//int main()
//{
//	GrowableArray<char> arr;
//	arr.Load("Hamza");
//	arr.Print("String :");
//}