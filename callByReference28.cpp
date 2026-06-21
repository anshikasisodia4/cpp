#include <iostream>
using namespace std;  

//This will swap the values
//Actual argumemts are changed

// 1 .Call by reference using pointers
// void swapPointer(int* a , int* b){
//     int temp = *a;                     // changes the value at address
//     *a = *b;
//     *b = temp;

// }

// 2. call by refernce using c++ references variables
void swapRefrenceVar(int &a , int  &b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int x= 4, y= 5;
          //1.
    // cout<<"BEFORE SWAPPING:"<<endl;
    // cout<<"The value of x is "<<x<<" .The value of y is "<<y<<endl;
    // swapPointer(&x ,&y);
    // cout<<"AFTER SWAPPING:"<<endl;
    // cout<<"The value of x is "<<x<<" .The value of y is "<<y<<endl;
    
         //2.
    cout<<"BEFORE SWAPPING:"<<endl;
    cout<<"The value of x is "<<x<<" .The value of y is "<<y<<endl;
    swapRefrenceVar(x ,y);
    cout<<"AFTER SWAPPING:"<<endl;
    cout<<"The value of x is "<<x<<" .The value of y is "<<y<<endl;

    return 0;
}