// 2-D Arrays

# include<iostream>
using namespace std;

int main() {

    int a[2][3];          // Declare 2-D array

    // Use for loop in 2-D Arrays:
    for (int i =0; i < 2; i++){                    // i -> rows

        for (int j = 0; j < 3; j++) {              // j -> columns

            a[i][j] = i * j; 

            cout << a[i][j] << " ";     // optional print       // " " These are spaces only yse in clumns
        }
            
        

        cout << endl; // new line for each row
    }
        
return 0;
}

