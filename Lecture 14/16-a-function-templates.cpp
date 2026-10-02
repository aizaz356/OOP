// "function template"
// It allows us to create a single function that can work with different data types.
// A template is a blueprint

#include <iostream>
#include <string>
using namespace std;

template <class T>              // A template is a blueprint
T find_max(T a, T b) {
    T result;
    result = ( a > b ) ? a:b;   // ternary operator
    return result;
}

int main() {
    int x, y, k;                         // integer type
    x = 25;
    y = 30;

    k = find_max<int>(x, y);
    cout << "Max for int: " << k << endl;

    string a, b, l;                    // string type
    a = "Ali";
    b = "Usman";
    l = find_max<string>(a, b);

    cout << "Max for string:  " << l << endl;

    return 0;
}