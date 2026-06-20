#include <iostream>
using namespace std;

 //Function Prototype
 //type function-name (arguments);

 int sum(int a,int b);           //acceptable
 //  int sum(int a,b);           //not acceptable
 // int sum(int ,int);          // ACCEPTABLE

 void g(void);  //OR void g();

int main(){  
    int num1, num2;   
    //num1 and num2 are actual parameters

    cout<<"Enter first number: "<<endl;
    cin>>num1;
    cout<<"Enter second number: "<<endl;
    cin>>num2;
    cout<<"The sum is "<<sum(num1, num2)<<endl;

    g();
    
    return 0;
}

int sum(int a,int b){       // formal and actual parameters can be same
    int c = a + b;       //a and b are formal parameters : these takes value from actual parameters
    return c;

}

void g(){            // this is not necessary to have a return type
    cout<<"HELLO";
}