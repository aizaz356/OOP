// Prepocessor directives ---> macros

#include<iostream>
using namespace std;

#define INCLUDE_INVENTORY_MODULE  // switch define    // (switch) to include inventory module  

#ifdef INCLUDE_INVENTORY_MODULE // switch use    // if switch is defined, then the inventory module will be included in the code
void show_inventory() {                         // if switch is not defined, then the inventory module will not be included in the code
    cout << "Showing inventory ... " << endl;
}
#endif                                                                              



#define SIZE 5

#define ABS(a) ((a) <0 ? -(a) : a)              // Macro to calculate absolute value // (ternary operator)

int main () {
    cout << "Hello World!" << endl;

    for (int i =0; i < SIZE; i++)
        cout << i << endl;

    cout << "SIZE" << endl;


    cout << "Abs value: " << ABS(-25)<< endl;     // absolute value


    #ifdef INCLUDE_INVENTORY_MODULE        
    show_inventory();     // show_inventory function is defined only if the INCLUDE_INVENTORY_MODULE (switch) is defined
    #endif

    

    return 0;
}


