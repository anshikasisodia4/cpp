#include <iostream>
using namespace std;

int main(){

    // Pointers: data type which holds address of other data types
     int a=3;
     int* b ;
     b = &a;

     // & Address of operator
     cout<<"The address of a is "<<&a<<endl;   //value of b
     cout<<"The address of a is "<<b<<endl;
     cout<<endl;

     // Dereference of operator
     cout<<"The value at address b is "<<*b<<endl;    //value of a
    cout<<endl;          
     
     // Pointer to pointer
     int **c;
     c=&b;
     cout<<"The address of  b is "<<&b<<endl;    // value of c
     cout<<"The address of b is "<<c<<endl;
     cout<<endl;

     cout<<"The value at  address c is "<<*c<<endl; // value of b
     cout<<endl;

     cout<<"The value at address value at(value of c)  is "<<**c<<endl;   //value of a

    return 0;
}