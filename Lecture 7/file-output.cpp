// file output in File Handling

#include<iostream>
#include<fstream>                // for  ofstream 
using namespace std;

int main () {

    int x;       // same as the : ofstream   fout;
    ofstream  fout;      // of --> output file,  fout --> fileotput
    

    fout.open("sample.txt");      // write mode

    fout << "Hello World";

    fout.close();                // When we use file --> close
}

