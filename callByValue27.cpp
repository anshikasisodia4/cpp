#include <iostream>
using namespace std;

//This will non swap a and b
 void swap(int a , int b){
    int temp = a;
    a = b;
    b = temp;
 }

int main(){
    int x = 4 , y = 5;

    cout<<"Before swapping: "<<endl;
    cout<<"The value of x is "<<x<<" .The value of y is "<<y<<endl;
    swap(x,y);                      // in the output there is no swapping because The value of x and y copy into a and b 
    cout<<endl;
    cout<<"After swapping: "<<endl;
    cout<<"The value of x is "<<x<<" .The value of y is "<<y<<endl;
   
    
    return 0;
}