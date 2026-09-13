#include<iostream>
#include<string>
using namespace std;

class Employee {
public:
    string name;          // these are members .. or fields .. or properties 
    string cnic;
    int salary;
    int id;

    void sign_in();       // these are called methods
    void sign_out();

    Employee();            // Constructor ... notice the missing return type  
    Employee(int salary);  // this is called function "overloading" (constructor overloading)

    ~Employee();           // Destructor  
};

void Employee::sign_in() {
    cout << "Signing in the employee: " + name << endl;
}


Employee::Employee() {
    cout << " - Employee() instance being created ... " << endl;
    salary = 10000;       // default salary
}


Employee::Employee(int salary) {
    cout << " - Employee(salary) instance being created with salary ... " << endl;
    this->salary = salary;       // this points to the current instance ... automatically
}

Employee::~Employee() {
    cout << " - Employee instance being removed!" << endl;
}


int main() {
    Employee *e;         // reference variable of class Employee
    e = new Employee();  // constructor called here
    cout << "Salary: " << e->salary << endl; 

    
    delete e;                // always a good idea to free memory
    e = new Employee(20000);  // also try this one

    cout << "Salary: " << e->salary << endl;    // e->salary is equivalent to (*e).salary // e-> points to the instance of Employee class

    delete e;              // destructor called here
    e = NULL;              // fix the "dangling pointer"!

    cout << "End of main ... " << endl;
    return 0;
}
