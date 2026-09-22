// 'getters and setters' are used to access private data members of a class
// public access specifier    ---> members declared under this can be accessed outside the class
// private access specifier   ---> members declared under this cannot be accessed outside the class
// protected access specifier ---> members declared under this can be accessed within the class and its derived(child) classes

#include<iostream>
using namespace std;

// Parent class:
class Employee {
    protected:                                         // protected access specifier ---> members declared under this can be accessed within the class and its derived(children) classes
    int pay_rate;          // hidden/private data member ---> cannot be accessed outside the class

    public:                                            // public access specifier ---> members declared under this can be accessed outside the class
    // these are called 'setters and getters'
    void set_pay_rate(int pay_rate) {                  // setter method/function ---> used to set the value of a private data member
        if(pay_rate > 14) {
            this->pay_rate = pay_rate;               // this->   ---> refers to the current instance of the class
        } else {
            cout << "Pay rate " << pay_rate << " not acceptable. Not setting ... ";
        }
    }

    int get_pay_rate() {                             // getter method/function ---> used to get the value of a private data member
        return pay_rate;
    }
};

// Child class:
class FacultyMember : public Employee {
    public:

    // if we override this method, that's an error 
    // for this, we need to make the pay_rate "protected"
    void set_pay_rate(int pay_rate) {                          // 'Overriding' the setter method/function of the parent class
        if (pay_rate > 25) {
            this->pay_rate = pay_rate;
        } else {
            cout << "pay rate "<< pay_rate << " not acceptable. Not setting ... ";
        }
    }
};




int main() {
    Employee a;

    // a.pay_rate = 10;       // error

    a.set_pay_rate(15);
    cout << "Current pay rate: " << a.get_pay_rate() << endl;

    a.set_pay_rate(11);
    cout << "Current pay rate: " << a.get_pay_rate() << endl;

    a.set_pay_rate(20);
    cout << "Current pay rate: " << a.get_pay_rate() << endl;

    //return 0;


    //// -----------
    cout<< "Creating a FacultyMember instance ... " << endl;
    FacultyMember f;
    f.set_pay_rate(20);
    cout << "Current pay rate: " << f.get_pay_rate() << endl;
    
    f.set_pay_rate(11);
    cout << "Current pay rate: " << f.get_pay_rate() << endl;

    f.set_pay_rate(29);
    cout << "Current pay rate: " << f.get_pay_rate() << endl;

    return 0;
}