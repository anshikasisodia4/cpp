#include <iostream>
using namespace std;

class Employee
{
private:
 int a,b,c;
    
public:
 int d ,e;
 void setData (int a1, int b1, int c1);   //Declaration
 void getData(){
    cout<<"The value of a is : "<<a<<endl;
    cout<<"The value of b is : "<<b<<endl;
    cout<<"The value of c is : "<<c<<endl;
    cout<<"The value of d is : "<<d<<endl;
    cout<<"The value of c is : "<<e<<endl;

  }
};

void Employee :: setData(int a1, int b1, int c1){   // :: Scope Resolution Operator
    a = a1;
    b = b1;
    c = c1;
}

int main(){
    Employee Anshika ;

    // d and e public 
    Anshika.e =22;
    Anshika.d= 24;

    // this will give an error
    // Anshika.a=25;
    
    // a b and c are private 
    Anshika.setData(1,2,4);
    Anshika.getData();
    
    return 0;
}