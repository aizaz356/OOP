// *P -> value at address(pointed to by P) means de-referencing the pointer(follow the pointer) <- Value at Operator
// & -> Ampersand(Address)
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
    cout << &x << endl;      // value of address of x

    int *P;         // P is an  integer pointer  (declaration of pointer)
    P = &x;            // address of-operator(address of x)
    
         
    cout << P << endl;     // output value of P
    cout << *P << endl;    // value at address(pointed to by p)


    // This -- *P -- is called pointer de-referencing

    return 0;
}