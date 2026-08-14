// Link List:    insert node(create node), delete node

#include <iostream>
using namespace std;

struct node{
    int val;
    node *next;
};

// create_node():
node* create_node(node *current, int new_node_value) {
    node *n = new node;  // create node

    // set values
    n->val = new_node_value;
    n->next = NULL;

    // Link "current" node to this new node
    current->next = n;

    return n;
}

// output_list():

void output_list(node *h) {
    node *current = h;
    cout << " [ ";
    while (current != NULL) {
        cout << current->val << " ";

        current = current->next;
    }
    cout << " ] " << endl;



/*
// sum_list():

int void sum_list(node *h) {

    int sum = 0;
    node *current = h;

    while (current != NULL) {
        sum = sum + current->val;                   // sum = sum + i;
        

        current = current->next;
    }
    return sum;
    
}



sum_list(head);
output_list(head);
*/

}

// delete_after_node():
void delete_after_node(node *current) {
    node *temp = current->next;
    current->next = current->next->next;
    delete temp;
}

int main () {
    node *head;
    head = new node;
    head->val = 2;
    head->next = NULL;

    node *current = head;

    current = create_node(current, 27);
    current = create_node(current, 30);
    current = create_node(current, 50);

    output_list(head);



/*
    Again output:

    current = head;         // return to first node
    output_list(head);

*/




    //return 0;


    current = head->next;
    cout << "Going to delete: " << current->val << endl;
    // head->next = current->next;
    delete_after_node(head);
    output_list(head);

    return 0;
}



/*
1) Creating the linked list

Your list becomes:

head
 ↓
[2] → [27] → [30] → [50] → NULL

These lines:

current = create_node(current, 27);
current = create_node(current, 30);
current = create_node(current, 50);

2) output_list() 

This:

while (current != NULL) {
    cout << current->val << " ";
    current = current->next;
}

 traverses the list.

Output:

[ 2 27 30 50 ]

3) delete_after_node() 

void delete_after_node(node *current) {
    node *temp = current->next;
    current->next = current->next->next;
    delete temp;
}

If current is head, then:

Before:


[2] → [27] → [30] → [50] → NULL
 ↑
current

temp points to 27.

Then:

current->next = current->next->next;

changes the list to:

[2] ─────→ [30] → [50] → NULL

4) Finally:

delete temp;

deletes the [27] node.

So the final output is:

[ 2 30 50 ]
 
*/