#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // connecting file with out stream
    ofstream out("76SampleFile.txt");

    // creating a name string and filling it with the string entered by user
    cout << "Enter your name : " << endl;
    string name;
    cin >> name;

    // writing a string to the file
    out <<  name<<" is my name";
    
    out.close();

    ifstream in("76SampleFile.txt");
    string content;
    in>>content;
    cout<<"The content of the file is : "<<content;
    in.close();
    return 0;
}