#include <iostream>
using namespace std;

int & swapReferenceVar(int &a , int &b) {
    int temp = a;
    a= b;
    b= temp;
    return a;
}

int main(){
    int x = 4, y=5;

    cout<<"BEFORE SWAPPING:"<<endl;
    cout<<"The value of x is "<<x<<" .The value of y is "<<y<<endl;
    swapReferenceVar(x, y) = 766;             // this will change the value of x
    cout<<"AFTER SWAPPING:"<<endl;
    cout<<"The value of x is "<<x<<" .The value of y is "<<y<<endl;
    
    return 0;
}