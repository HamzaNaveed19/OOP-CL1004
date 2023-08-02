//#include<iostream>
//using namespace std;
//class employee {
//	int* emp_id;
//	float* salary;
//	int size;
//public:
//	static int S;
//	employee(int n=3){
//		size = n;
//		emp_id = new int[size];
//		salary = new float[size];
//	}
//	void print(int i) {
//		cout << "employee id = " << emp_id[i] << endl;
//		cout << "employee salary = " << salary[i] << endl;
//	}
//	void addemp(int id, float sal) {
//		emp_id[S] = id;
//		salary[S] = sal;
//	}
//	float avgsalary() {
//		float sum = 0;
//		for (int i = 0; i < S; i++) {
//			sum += salary[i];
//		}
//		return (sum / size);
//	}
//
//	void promote(int id, float percent) {
//		int index = -1;
//		for (int i = 0; i < S; i++) {
//			if (id == emp_id[i]) {
//				index = i;
//				break;
//			}
//		}
//		salary[index] = salary[index] + (salary[index] * percent / 100);
//	}
//};
//int employee::S = 0;
//class Engineer:public employee {
//	int* pec_num;
//public:
//	Engineer():employee() {
//		pec_num = new int[3];
//	}
//	void addemployee(int id, float sal, int pec_num) {
//		addemp(id, sal);
//		this->pec_num[S] = pec_num;
//		S++;
//	}
//	void Print() {
//		for (int i = 0; i < S; i++) {
//			employee::print(i);
//			cout << "the pec number is :" << pec_num[i] << endl;
//		}
//	}
//	float avgsalary() {
//		return employee::avgsalary();
//	}
//	void promote(int id, float percent) {
//		employee::promote(id, percent);
//
//	}
//	
//};
//
//int main() {
//	Engineer obj;
//	obj.addemployee(1101, 55000, 1200);
//	obj.addemployee(1102, 65000, 1301);
//	obj.addemployee(1103, 75000, 1401);
//	obj.Print();
//	obj.promote(1102, 10.0);
//	cout<<"after promotion of an employee with id 1102 : "<<endl;
//	obj.Print();
//	cout << "the average salary is : " << obj.avgsalary() << endl;
//	employee* ptr = &obj;
//	cout << "the average salary using pointer of base class is :  " << ptr->avgsalary() << endl;
//	/*employee obj_emp;            //here error is given because derived class cannot store address of base class.
//	Engineer* ptr1 = &obj_emp;*/
//	system("pause");
//}