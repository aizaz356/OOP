// string arrays   ->  same as character(char) arrays 

#include <iostream>
#include <string>
using namespace std;

int main() {
    // In string a:
    string a = "Hello"; //"Hello" has 5 characters bcz string does not include null terminator(\0) -> total 5 // string a = "Hello"; -> shortcut -> char a[] ="Hello";

    // Use for loop in char arrays:
    for (int i = 0; i < 6; i++) {

        cout << a[i] << endl;
    }
    // In string a useful concepts and features:
    cout << a.length() << endl;        // describe length
    
    cout<< a.empty() << endl;         // decribe inside string exist or not (true -> t -> 1 , false -> f -> 0)

    return 0;
}