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
