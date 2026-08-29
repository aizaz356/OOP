// file input in File Handling

#include<iostream>
#include<fstream>      // for ifstream
using namespace std;

int main () {

    ifstream fin;      // if --> input file,  fin --> fileinput  // // fin(variable)-->data-type-->ifstream

    fin.open("sample.txt");

    string line;         // for line

    while(fin) {

        getline(fin, line);

        cout << line;
    }
    fin.close();           // When we use file --> close
}