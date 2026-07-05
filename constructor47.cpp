#include <iostream>
using namespace std;

class Complex{
    int a ,b;
   
    // creating a constructor
    // constructor is a special member function with same name as of the class 
    //it is used to initialize the objects of its class
    // it is automatically invoked whenever ab object is created 
    // it is used to initialise the objects of its class
    public:
     // constructor declaration 
    Complex (void); 
    void printNumber(){
        cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;

    }        
};
Complex:: Complex(void){
    a = 10;
    b=0;
}

int main(){
    Complex c;
    c.printNumber();
    return 0;
}