// class template
// In Java ---- called generics
// In C++ ---- called templates
// In Python ---- python has no data types, so no need for generics/templates

// push() means:  Add a new element to the list    /  Add a new node to the end of the list(Add element)
// pop()  means: removes the last node.            /  remove the last element from the list(Remove element)

#include <iostream>
using namespace std;

struct node {
    int val;
    node *next;
};

class List {
    node *head, *last;

    void delete_after_node(node *current);

    public:
    List();                            // constructor
    void push(int val);                // member function
    int pop();                         // member function
    void print_list();                 // member function
};

// body of the constructor
List::List() {
    last = head = NULL;
}

void List::push(int val) {
    node *temp = new node;
    temp->val = val;
    temp->next = NULL;

    if (last == NULL) {              // need this when list is empty
        head = temp;
        last = temp;
    } else {
        last->next = temp;
        last = last->next;
    }
}

int List::pop() {
    int val;

    if (head->next == NULL) {     // only one element in list
        val = last->val;          // save val for later use  
        delete head;              // delete head
        head = NULL;              // nothing left in list now
        last = NULL;
    } else {                      // all other cases
        val = last->val;          // save val for later use
        node *current = head;
        while(current->next != last) {
            current = current->next;
        }
        // now current is just before last. So, delete last
        delete_after_node(current);
        last = current; // also need to move last 
    }

    return val;  // now return the value we saved later
}

void List::delete_after_node(node *current) {
    node* temp = current->next;
    current->next = current->next->next;
    delete temp;
}

void List::print_list() {
    node *current = head;
    cout << "[" ;
    while (current != NULL) {
        cout << current->val << " ";

        current = current->next;
    }
    cout << "]" << endl;
}



int main() {
    List l;              // create an instance of List class   // constructor automatically called here
    l.push(5);          // leads to segmentation fault at first
    l.print_list();

    return 0;
}


