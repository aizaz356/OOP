// for loop     syntax -> for (initialization(init); stopping condition(condition); step(increment)/change) {body of the for loop}

#include <iostream>
using namespace std;
int main() {   // body of the main function

for (int i = 0; i < 5; i++) {   // for loop syntax -> for ( 1)initialization; 2)stopping condition; 3)step(increment)/change) {body of the for loop}
    
    if (i == 2) {
        continue;   // continue statement -> skip this iteration of the loop and move to the next iteration

        //break;      // break statement -> exit the loop completely
    }

    cout << i << endl;          // body of the for loop
}

return 0;
}