#include<iostream>
#include<string>
using namespace std;

class Employee {         // declaration(definition) of class
public:
    string name;
    string cnic;
    int id;

    void sign_in();     // prototype
    void sign_out();    // prototype
};


void Employee::sign_in() {
    cout << "Signing in the employee: " + name << endl;
}

int main() {
    Employee e1;                  // e1 is an object(instance) of class Employee
    e1.name = "Ali";

    cout << e1.name << endl;
    e1.sign_in();
    //e1.sign_out();     // linker error



    Employee *e;                   // reference variable 
    e = new Employee;

    e->name = "Usman";     //(*e).name = e->name

    e->sign_in();         // same as:  (*e).sign_in();

    return 0;
}
