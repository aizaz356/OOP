// character(char) arrays ->  same as string arrays

#include <iostream>
#include <string>
using namespace std;

int main() {

    char a[] = "Hello"; //"Hello" has 5 characters + 1 null character/terminator(\0) = 6 total // char a[] ="Hello"; -> shortcut -> string a = "Hello";

    // Use for loop in char arrays:
    for (int i = 0; i < 6; i++) {

        cout << a[i] << endl;
    }

    cout << a;   

    return 0;
}

