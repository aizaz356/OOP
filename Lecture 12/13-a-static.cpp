// static variable and static method/function ,,, non-static method/function and static local variable

#include<iostream>
#include<string>
using namespace std;

class User {
    int id;
    static int next_id;            // static variable ---> shared across all instances of the class

    public:
    static int next_user_id() {   // static method/function ---> can be called without an instance of the class
        next_id++;
        return next_id;
    }

    User() {                          // constructor
        id = User::next_user_id();    // body of  static method/function // because next_user_id() is static, we can call it using the class name
    }

    int get_id() {           // non-static method/function ---> can be called only with an instance of the classb
        return id;
    }
};
int User::next_id = 0;            // initialize the static variable here // body of the static variable is outside the class definition



int fib(int n);


int main() {

    User u;
    cout << "User u id: " << u.get_id() << endl;

    User v;
    cout << "User v id: " << v.get_id() << endl;


    // return 0;





    fib(1);                                        // try: fib(3);
    cout << "Total count: " << fib(-1) << endl;


    return 0;
}



int fib(int n) {
    static int count = 0;                       // static local variable ---> value persists across function calls

    // just for returning the count 
    if (n == -1) {
        return count;
    }

    count += 1;    // increment call count 

    if (n <= 1) {
        return n;
    } else {
        return fib(n-2) + fib(n-1);
    }

}
