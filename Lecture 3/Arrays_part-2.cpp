// array -> homogeneous elements(same type)
//       -> no multiple datatypes 
//       -> an array size is fixed


//  Reverse for loop in array:
#include <iostream>
using namespace std;

int main() {

    int a[3] = { 0, 1, 2};           // Declare array
    
    // Use for loop in array:
    for (int i = 2; i >= 0; i--) {    

        cout << a[i] << endl;
    }

return 0;
}