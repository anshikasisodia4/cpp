#include <iostream>
#include<fstream>
#include<string>

/*
The useful classes for working with files in c++ are:
1. fstreambase
2. ifstream --> derived from fstreambase
3. ofstream --> derived from fstreambase
*/

/*
in order to work with files in c++ , you will have to open it . Primarily ,There are two ways to open a file:
1. using the constructor
2. using the member function open() of the class
*/

using namespace std;

int main(){
    string st1 ="Anshika Sisodiya";
    // opening files using constructor and writing it
    ofstream out("75SampleFile.txt");
    out<<st1;
 
    //  string st2;   
    // // opening files using constructor and reading it
    // ifstream in("75SampleFile2.txt");   //write operation
    // // in>>st2;
    //  getline(in , st2);
    // cout<<st2;
    return 0;
}