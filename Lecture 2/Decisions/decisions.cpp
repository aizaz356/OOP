// decisions syntax    -> if (condition) {}

# include <iostream>
using namespace std;
int main () {

    int age = 16;
    if (age >= 18) {                  // if (condition) {}
        cout << "You can vote" << endl;  // code to execute if condition is true
    } else {
        cout << "You are safe" << endl;  // code to execute if condition is false
    }
    return 0;
}
