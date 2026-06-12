#include <iostream>
 using namespace std;
 int main(){
    int a=8, b=4;
    cout<< "Operators:"<<endl;


    // Arithmetic operators
    //perform arithmee=tic operations
    cout<<"The value of a + b is "<<a+b <<endl;
    cout<<"The value of a - b is "<<a-b <<endl;
    cout<<"The value of a * b is "<<a*b <<endl;
    cout<<"The value of a / b is "<<a/b <<endl;
    cout<<"The value of a % b is "<<a%b <<endl;
    cout<<"The value of a++ is "<<a++ <<endl;
    cout<<"The value of a-- is "<<a-- <<endl;
    cout<<"The value of ++a is "<<++a <<endl;
    cout<<"The value of --a is "<<--a <<endl;
    cout<<endl;

    // Assignement operators
    // int c=2,d=3;
    // char e='%';
    // used to assign values to variables


    //Comparison Operators
    //used to compare two variables
    cout<<"The value of a==b is : "<<(a==b) <<endl;  
    cout<<"The value of a!=b is : "<<(a!=b) <<endl;  
    cout<<"The value of a>b is : "<<(a>b) <<endl;  
    cout<<"The value of a<b is : "<<(a<b) <<endl;  
    cout<<"The value of a>=b is : "<<(a>=b) <<endl;  
    cout<<"The value of a<=b is : "<<(a<=b) <<endl;  
    cout<<endl;
    
    //Logical Operators
    cout<<"The value of logical and (&&) operator : "<<((a==b) && (a>b)) <<endl;  
    cout<<"The value of logical or (||) operator : "<<((a==b) || (a>b)) <<endl;  
    cout<<"The value of logical not (!) operator : "<<(!(a==b)) <<endl;  
     
    
    //bitwise operators

  
    return 0;
 }