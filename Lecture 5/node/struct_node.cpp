// struct node

/*List with Pointers in C++

node --> " A node is defined as a structure which has an integer value and some
           node pointer(node*)"
A node contains:
1)Data – the value stored.
2)Pointer – the address of the next node.

*/

#include <iostream>
using namespace std;

struct node {         // Each node contains:

    int val;         // 1) Data(int value)    --> the value stored.

    node*next;      //  2) Pointer*(next)     --> the address of the next node.
};


//// To create new node(1st node):

int main() {


node*n;
n = NULL;

n = new node;        // new node --> Address of a node --> data-type --> * --> n(bcz n is a node*)  // n is a node*

// Data( int value) of a node:
n->val = 1;

// pointer*(address) to next node:
n->next = NULL;  


/*

n
↓
+-------+-------+
|   1   | NULL  |
+-------+-------+

*/



//// Create new node(2nd node):

n->next = new node; // new node --> Address of a node --> data-type --> * --> bcz (n->next) is a address of a previous node

// Data( int value) of a node:
n->next->val = 5;

// pointer*(address) to next node:
n->next->next = NULL; 


/*

n
↓
+-------+-------+       +-------+-------+
|   1   |   ●---------->|   5   | NULL  |
+-------+-------+       +-------+-------+
          next


*/


return 0;

}