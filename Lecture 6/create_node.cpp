// create node :

#include <iostream>
using namespace std;

struct node {
    int val;
    node* next;
};

// create_node()
node* create_node(node* current, int new_node_value) {

    node* n;
    n = new node;

    n->val = new_node_value;
    n->next = NULL;

    current->next = n;

    return n;
}


// Function to output the linked list
void output_list(node* head) {

    node* current = head;

    while (current != NULL) {

        cout << current->val << " -> ";

        current = current->next;
    }

    cout << "NULL" << endl;
}


int main() {

    // Create first node
    node* head;
    head = new node;

    head->val = 1;
    head->next = NULL;

    // Current points to head
    node* current = head;

    // Create nodes 2 and 3
    current = create_node(current, 2);
    current = create_node(current, 3);

    // Create nodes 4, 5 and 6
    for (int i = 4; i <= 6; i++) {
        current = create_node(current, i);
    }

    // Output the linked list
    output_list(head);

    return 0;
}