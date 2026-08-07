// if-else-if_ladder(Recommend)

# include <iostream>
using namespace std;
int main () {
    
char grade = 'A';                  // also try 'B', 'C'
float points;

if (grade == 'A') 
    points = 4.0;

else if (grade == 'B') 
    points = 3.0;

else if (grade == 'C') 
    points = 2.0;


else 
    points = 0.0;


cout << points;

return 0;
}