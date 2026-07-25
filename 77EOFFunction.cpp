#include <iostream>
#include<fstream>
#include<string>

using namespace std;

int main(){
    ofstream out;
    out.open("77SampleFile.txt");
    out<<"Hey! This is me."<<endl;
    out<<"Good Morning";
    out.close();

    ifstream in;
    string st;
    in.open("77SampleFile.txt");
    // in>>st;
    // cout<<st;
    while(in.eof()==0){
        getline(in,st);
        cout<<st<<endl;

    }
    in.close();
    
    return 0;
}