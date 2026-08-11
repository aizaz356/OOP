// ->  This is arrow operator ( - dash, closing angle bracket >) 

// We make -> (arrow operator) with struct and pointer(*):

/*
(*s).name; --> shortcut(syntactic sugar) --> s-> name;
-> encapsulates star(*) and both brackets() and the dot(.)

So, s-> same as(=) --->   (*s).
*/

#include <iostream>
using namespace std;

struct student {
    int roll_no;
    string name;
};

/*
int x;   --> student s1;
int *P;  --> student *s
P = &x;  --> s = &s1;
*/

int main () {
     
    student s1;       // s1 -> student value
    s1.name = "Ali";  // "Ali" -> string      // . means inside -> s1

    student *s;      // s is an student pointer(*)

    s = &s1;         // one way of getting the address ... 

    cout << (*s).name;   // output:Ali //  Note:         . only put on struct not *
// *s --> *&s1 --> same as --> *s1.name --> Ali

/*
(*s).name; --> shortcut(syntactic sugar) --> s-> name;
-> encapsulates star(*) and both brackets() and the dot(.)

So, s-> same as(=) --->   (*s).
*/

    cout << s->name;   // output:Ali


return 0;
}