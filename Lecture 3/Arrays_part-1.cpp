// array -> homogeneous elements(same type)
//       -> no multiple datatypes 
//       -> an array size is fixed

#include <iostream>
using namespace std;

int main() {

    int a[3] = { 0, 1, 2};           // Declare array
    
    // Use for loop in array:
    for (int i = 0; i < 3; i++) {    

        cout << a[i] << endl;
    }

return 0;
}