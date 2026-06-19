#include <iostream>
using namespace std;

int main(){

    //Pointer arithmetic
    //address(new) = address(current) +i*size of datatype

    int marks[4] ={23,45,56,78};
    int* p = marks;

    cout<<*(p++)<<endl;
    cout<<*(++p);

    // cout<<"The value of *p is "<<*p<<endl;
    // cout<<"The value of *(p+1) is "<<*(p+1)<<endl;
    // cout<<"The value of *(p+2) is "<<*(p+2)<<endl;
    // cout<<"The value of *(p+3) is "<<*(p+3)<<endl;



    return 0;
}