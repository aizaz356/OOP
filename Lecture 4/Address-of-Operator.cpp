// P = &x -> address-of-operator(address of x)   <- address-of-operator
// & -> Ampersand(Address)  e.g; &x -> address of x(value at operator)
// * -> pointer


/*

Pointer arithemetic(Increase, Decrease) in RAM:  
1 chunk(int) -> space to save -> 4 bytes
int pointer -> space to save  -> 4 bytes  = 1 chunk(int) -> if +1 then moves to next chunk(int)
long pointer -> space to save -> 8 bytes -> if +1 then moves to next chunk(int)

*/




#include <iostream>
using namespace std;

int main() {

    int x;
    x = 25;
    cout << x << endl;


    cout << &x << endl;  // & -> Ampersand(Ampersand is called the "Address of operator"), x -> operand(variable) // value of address of x

    
    int *P;            // P is an  integer pointer  (declaration of pointer)
    P = &x;            // address of-operator(address of x)

    cout << P << endl;        // output value of P
   
return 0;
}