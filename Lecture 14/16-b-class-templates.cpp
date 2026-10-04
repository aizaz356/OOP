// Class Template + Linked List + push() + pop()

// Templates:
// In Java -- called 'generics' 
// In C++ ---- called 'templates'
// In Python ---- python has no data types, so no need for generics/templates

// push() means:  Add a new element to the list    /  Add a new node to the end of the list(Add element)
// pop()  means: removes the last node.            /  remove the last element from the list(Remove element)

/*
| Code                 | Meaning                        |
| -------------------- | ------------------------------ |
| `template <class T>` | `T` is a data-type placeholder |
| `List<int>`          | List of integers               |
| `List<string>`       | List of strings                |
| `head`               | Points to first node           |
| `last`               | Points to last node            |
| `push()`             | Adds a node at the end         |
| `pop()`              | Removes the last node          |

*/



#include<iostream>
using namespace std;

// class template
template <class T>
class List {

    struct node {
        T val;
        node *next;
    };

    node *head, *last;

    void delete_after_node(node *current);

    public:
    List();                         // constructor
    void push(T val);               // member function
    T pop();                        // member function
    void print_list();              // member function
};

// body of the constructor
template <class T>
List<T>::List() {
    last = head = NULL;
}


template <class T>
void List<T>::push(T val) {
    node *temp = new node;
    temp->val = val;
    temp->next = NULL;

    if (last == NULL) {         // need this when list is empty
        head = temp;
        last = temp;
    } else {
        last->next = temp;
        last = last->next;
    }
}

template <class T>
T List<T>::pop() {
    T val;

    if (head->next == NULL) {      // only one element in list
        val = last->val;           // save val for later use
        delete head;               // delete head
        head = NULL;               // nothing left in list now
        last = NULL;
    } else {
        val = last->val;           // save val for later use
        node *current = head;
        while(current->next != last) {
            current = current->next;
        }
        // now current is just before last. So, delete last
        delete_after_node(current);
        last = current;             // also need to move last
    }

    return val;  // now return the value we saved later
}

template <class T>
void List<T>::delete_after_node(node *current) {
    node *temp = current->next;    
    current->next = current->next->next;
    delete temp;
}

template <class T>
void List<T>::print_list() {
    node *current = head;
    cout << " [ ";
    while (current != NULL) {
        cout << current->val << " ";

        current = current->next;
    }
    cout << "]" << endl;
}




int main () {

    List<int> l;              // create an instance of List class with template(parameter int) // constructor automatically called here
    cout << "Creating integer list ... " << endl;
    l.push(5);
    l.push(15);
    l.print_list();

    l.pop();
    l.print_list();


    cout << "Creating string list ... " << endl; 
    List<string> l2;    // create an instance of List class with template(parameter string) // constructor automatically called here
    // l2.push(5);      // error: l2 is a string list
    l2.push("student_1");
    l2.push("student_2");
    l2.print_list();

    l2.pop();
    l2.print_list();


    return 0;
}

