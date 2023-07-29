//#include <iostream>
//#include <string>
//#include<vector>
//using namespace std;
//
//class Appointment;
//
//class Person {
//public:
//    string name;
//    string address;
//    string email;
//
//    Person(string name="common", string address="abc", string email="abc@gmail.com") {
//        this->name = name;
//        this->address = address;
//        this->email = email;
//    }
//};
//
//class Patient : public Person {
//public:
//    int patientId;
//    Appointment** appointments;
//    static int appointmentCount;
//    vector<Appointment*> appoint;
//    Patient(string name, string address, string email, int patientId) {
//        this->name = name;
//        this->address = address;
//        this->email = email;
//        this->patientId = patientId;
//    }
//    void addAppointment(Appointment* appointment) {
//         appointmentCount++;
//         appoint.push_back(appointment);
//        cout<< "Patient " << name << " ! Your appointment   has been confirmed !" << endl;
//        cout << "-----------------------------------------------------------------------\n";
//    }
//};
//int Patient::appointmentCount = 0;
//class Doctor : public Person {
//public:
//    int employeeId;
//    Appointment** appointments;
//     static int appointmentCount;
//     vector<Appointment*> appoint;
//    Doctor(string name, string address, string email, int employeeId) {
//        this->name = name;
//        this->address = address;
//        this->email = email;
//        this->employeeId = employeeId;
//    }
//    void addAppointment(Appointment* appointment) {
//        appointmentCount++;
//        appoint.push_back(appointment);
//        cout << name << " schedule has confirmed appointment and Schedule updated !" << endl;
//        cout << "-----------------------------------------------------------------------\n";
//    }
//};
//int Doctor::appointmentCount = 0;
//class Appointment {
//public:
//    int appointmentId;
//    string appointmentDateTime;
//    Patient* patient;
//    Doctor* doctor;
//
//    Appointment(int appointmentId, string appointmentDateTime, Patient* patient, Doctor* doctor) {
//        this->appointmentId = appointmentId;
//        this->appointmentDateTime = appointmentDateTime;
//        this->patient = patient;
//        this->doctor = doctor;
//    }
//    void display() {
//        cout << patient->name << " has confirmed appointment with  "<<doctor->name<<" ." << endl;
//        cout << " Date and Time : " << appointmentDateTime << "\t Appointment ID = " << appointmentId << endl;
//        cout << "-----------------------------------------------------------------------\n";
//    }
//};
//
//class Department {
//public:
//    string departmentName;
//    Doctor** doctors;
//    static int doctorCount;
//    vector<Doctor*> doc;
//    Department(string departmentName) {
//        this->departmentName = departmentName;
//    }
//    void addDoctor(Doctor* doctor) {
//        doctorCount++;
//        doc.push_back(doctor);
//    }
//    void display() {
//        cout << departmentName << " has " << doctorCount << " doctors! " << endl;
//        for (int i = 0; i < doctorCount; i++) {
//            cout << i + 1 << " - " << doc[i]->name << endl;
//        }
//    }
//};
//int Department::doctorCount = 0;
//int main() {
//    
//    Patient p1("ALI", "123 Main St", "ali@gmail.com", 1);
//    Patient p2("HAMZA", "456 Elm St", "hamza981@gmail.com", 2);
//
// 
//    Doctor d1("Dr. Aftab", "789 Faisal Town", "aftab@gmail.com", 100);
//    Doctor d2("Dr. Hammad", "321 Iqbal Town", "hammad@gmail.com", 200);
//
//   
//    Appointment a1(101, "2023-04-01 10:00:00", &p1, &d1);
//    a1.display();
//    Appointment a2(102, "2023-04-02 2:00:00", &p2, &d2);
//    a2.display();
//    Appointment a3(103, "2023-04-03 3:00:00", &p1, &d2);
//    a3.display();
//    cout << "-------------------------------------------------" << endl;
//    cout << "After Add appointments to  doctors   ; " << endl;
//    d1.addAppointment(&a1);
//    d2.addAppointment(&a2);
//    d2.addAppointment(&a3);
//    cout << "-------------------------------------------------" << endl;
// 
//    cout << "After Add appointments to  Patients  ; " << endl;
//    p1.addAppointment(&a1);
//    p2.addAppointment(&a2);
//    p1.addAppointment(&a3);
//  
//    Department dept("Pathology");
//    dept.addDoctor(&d1);
//    dept.addDoctor(&d2);
//    dept.display();
//
//    system("pause");
//    return 0;
//}
