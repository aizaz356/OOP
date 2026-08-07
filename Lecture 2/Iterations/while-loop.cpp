// while loop         syntax -> while (condition) {body of the  while loop}

#include <iostream>
using namespace std;    
int main() {   // body of the main function

int i = 0;                            // 1)initialization(init)

while (i < 6) {                       // 2)stopping condition     syntax -> while (condition) {body of the  while loop}
       
    cout << i << endl;                // body of the while loop

    i += 1;   // i = i + 1; OR i++;   // 3)step(increment)/change
}

return 0;
}