// file input in File Handling

#include<iostream>
#include<fstream>      // for ifstream
using namespace std;

int main () {

    ifstream fin;      // if --> input file,  fin --> fileinput

    fin.open("sample.txt");

    string line;         // for line

    while(fin) {

        getline(fin, line);

        cout << line;
    }
    fin.close();
}