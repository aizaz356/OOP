// struct(structure) -> muliple datatypes
//                   -> heterogeneous(different types of elements)

# include <iostream>
using namespace std;

// struct define
struct student {
    string name;

    int roll_no;
};                        // Put ; only in struct data-type bracket last  ->  };

int main() {

    int a;          // int is data-type and a is variable name

    student s1;     // student is data-type and s1 is variable name

    s1.name = "Ali";
    s1.roll_no = 2;

    student s2;    // student is data-type and s2 is variable name

    s2.name = "Bilal";
    s2.roll_no = 26;


    // int a[5];          // int -> data-type, a -> array, [5] -> no. of elements  
    student s[5];         // an array of students // student -> data-type, s -> array, [5] -> no. of elements 

    s[0].name = "Ahmad";


    cout << "Student s1 has" << s1.roll_no << "roll-no" << endl;
    cout << "Student s2 has" << s2.roll_no << "roll-no" << endl;

    cout << "Student s[0] has" << s[0].name << "name" << endl;


    return 0;
}



