// current node

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

int main() {


//// current node:

//// 1st node:

node*n;
n = new node;           // new node --> Address of a node --> data-type --> * --> n(bcz n is a node*)  // n is a node*  ---->  node creted


// Data( int value) of a node:
n->val = 1;

// pointer*(address) to next node:
n->next = NULL; 


/*


n
 ↓
[ 1 | NULL ]
                   

*/


//// 2nd node:


   
node*current;
current = new node;   // new node --> Address of a node --> data-type --> * --> n(bcz current  is a node*)  // current is a node*    ---> node created   


n->next = current;    //    connects the first node address(*) to the second node


// Data( int value) of a node:
current->val = 5;

// pointer*(address) to next node:
current->next = NULL;



/*

current = new node;

current
   ↓
[ ? | ? ]


n->next = current;                     ---> same as ---> n->next = new node;(bcz new node is cuurent)

n
↓
[ 1 | ● ] ─────→ [ ? | ? ]
                    ↑
                    |
                 current



current->val = 5;
current->next = NULL;


n
 ↓
[ 1 | ● ] ─────→ [ 5 | NULL ]
                   ↑
                   |
                current

*/

return 0;
}