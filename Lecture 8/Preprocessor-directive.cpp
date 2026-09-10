// Prepocessor directives ---> macros  syntax: #define Size 5 ---> Size is by convetion and after size we put any value e.g:(5)

#include<iostream>
using namespace std;
#define SIZE 5

int main() {

    for (int i = 0; i < SIZE; i++) {
        cout << "Value of i: " << i << endl;
}

#define ABS(a)  ((a) < 0 ? -(a) : (a)) // this is "MACRO" // macro to calculate absolute value of a number and in bracket (ternary operator)

    
    cout << "Absolute value of "  << ABS(-5) << endl;

    #define INCLUDE_INVENTORY_MODULE  // switch to include inventory module


    #ifdef INCLUDE_INVENTORY_MODULE        
    void show_inventory();     // show_inventory function is defined only if the INCLUDE_INVENTORY_MODULE (switch) is defined
    #endif

    return 0;
}




