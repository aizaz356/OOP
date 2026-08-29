// file output in File Handling

#include<iostream>
#include<fstream>                // for  ofstream 
using namespace std;

int main () {

    int x;       // same as the : ofstream   fout;                     // x(variable)-->data-type-->int
    ofstream  fout;      // of --> output file,  fout --> fileoutput   // fout(variable)-->data-type-->ofstream
    

    fout.open("sample.txt");      // write mode

    fout << "Hello World";

    fout.close();                // When we use file --> close
}

