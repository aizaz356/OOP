// Constructor and Destructor  ,,    Function Overloading(Constructor Overloading)

#include<iostream>
using namespace std;

class Employee {
public:
    string name;          // these are members .. or fields .. or properties
    int salary;

    void sign_in();       // these are called methods

    // Constructor 1:
    Employee();            // Constructor ... notice the missing return type //declaration of  1st constructor

    //  Constructor 2: - Constructor Overloading:
    Employee(int salary);  // this is called function "overloading" (constructor overloading) // declaration of 2nd constructor

    // Destructor:
    ~Employee();           // Destructor ... notice the missing return type      // declaration of destructor
};


// definition/body of method:
void Employee::sign_in() {
    cout << "Employee signed in ..." << endl;
}

// definition/body of  1st constructor:
Employee::Employee() {                   
    cout << " - Employee() instance being created ... " << endl;
    salary = 100;       // default salary
}



// definition/body of 2nd constructor:
Employee::Employee(int salary) {        
    cout << " - Employee(salary) instance being created with salary ... " << endl;
    this->salary = salary;       // this points to the current instance ... automatically
}


// definition/body of destructor:
Employee::~Employee() {                  
    cout << " - Employee instance being removed!" << endl;
}



int main () {

    Employee *e;         // reference variable of class Employee

    // 1st constructor called here:
    e = new Employee();  
    

    cout << "Salary: " << e->salary << endl;


    // delete the instance to free memory and call destructor:
    delete e;    // destructor called here
    e = NULL;   // fix the "dangling pointer"!




    Employee *e2;         // reference variable of class Employee

    // 1st constructor called here:
    e2 = new Employee(); 

    e2->salary = 200;   // changing the salary of e2 instance

    cout << "Salary: " << e2->salary << endl;  // salary of e2 instance is now 200

    // Delete old e2 before assigning a new object
    delete e2;  // destructor called here
    e2 = NULL;

    // 2nd constructor called here:
    e2 = new Employee(300);  
    
    cout << "Salary: " << e2->salary << endl;  // salary of e2 instance is now 300



    // delete the instances to free memory and call destructor:

    delete e2;  // destructor called here
    e2 = NULL;  // fix the "dangling pointer"!


    cout << "End of main ... " << endl;

    return 0;
}



/*


e = new Employee()
        ↓
Employee() constructor
        ↓
salary = 100
        ↓
delete e
        ↓
~Employee() destructor
        ↓
e = NULL


THEN:


e2 = new Employee()
        ↓
salary = 100
        ↓
salary = 200
        ↓
delete e2
        ↓
~Employee()


THEN:


e2 = new Employee(300)
        ↓
Employee(int salary)
        ↓
salary = 300
        ↓
delete e2
        ↓
~Employee()





*/
