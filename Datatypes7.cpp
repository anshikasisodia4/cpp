#include <iostream>
using namespace std;
int c=45;   //global scope

int main(){
                       //built in data types
    int a, b, c;
    
    cout<<"Enter the value of a:"<<endl;
    cin>>a;
    cout<<"Enter the value of b:"<<endl;
    cin>>b;
    c=a+b;         //local scope
    cout<<"The sum 'c' is :"<<c<<endl;  //local
    cout<<"The global c is :"<<::c;     //global   //:: scope resolution operator


    return 0;
}