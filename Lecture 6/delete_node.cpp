// delete node:

#include <iostream>
using namespace std;

struct node {
    int val;
    node* next;
};

int main() {

    // Create nodes
    node* head = new node;
    head->val = 1;

    node* second = new node;
    second->val = 2;

    node* third = new node;
    third->val = 3;

    head->next = second;
    second->next = third;
    third->next = NULL;

    // current points to head
    node* current = head;

    // Delete the node after current
    node* temp;
    temp = current->next;

    current->next = current->next->next;

    delete temp;

    // Display list
    current = head;

    while (current != NULL) {
        cout << current->val << " -> ";
        current = current->next;
    }

    cout << "NULL" << endl;

    return 0;
}



/*

Before deletion:

head
 ↓
[1] -> [2] -> [3] -> NULL
        ↑
      delete

This code:
temp = current->next;         // makes temp point to node 2.

Then:
current->next = current->next->next;

Changes the connection:
[1] ------> [3]

Finally:
delete temp;  // deletes node 2 from memory.

//// So the important delete-node pattern is:

node* temp = current->next;
current->next = current->next->next;
delete temp;


This works when current->next is not NULL.

*/
