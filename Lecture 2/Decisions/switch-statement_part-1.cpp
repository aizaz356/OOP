// switch statement (cannot recommend)

#include <iostream>
using namespace std;
int main () {

char grade = 'A';                  // also try 'B', 'C'
float points = 0.0;

switch (grade) {                   // switch(variable) {}              <- switch statement syntax
    case 'A':
        points = 4.0;


    case 'B':
        points = 3.0;
        

    case 'C':
        points = 2.0;
    

    default:
        points = 0.0;
   
}

    cout << points;

  
return 0;

}

