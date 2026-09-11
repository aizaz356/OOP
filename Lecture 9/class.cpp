// class

#include<iostream>
using namespace std;

class Employee {           // declaration(definition) of class
public:
    string name;
    string cnic;

    void sign_in();       // prototype of member function
    void promote();       // prototype of member function
};

void Employee::sign_in() {
    cout << "Signing in ..... " << endl;
}

void Employee::promote() {
    cout << "Promoting employee ..... " << endl;
}

int main() {
    Employee e1;            // e1 is an object(instance) of class Employee
    e1.name = "Ali";

    cout << e1.name << endl;
    e1.sign_in();
    e1.promote();


    Employee *e;                   // reference variable
    e = &e1;                       // e points to the address of e1

    e = new Employee;

    //(*e).name = e->name
    e->name = "Ahmed";

    e->sign_in();               // same as:  (*e).sign_in();


    return 0;
}
