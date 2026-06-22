#include <iostream>
using namespace std;

//inline function saves time uses only when function is very simple and not complex
//during complie time the compiler replaces the ufnction call with the cpde itself
  // should not use when recursion, static variables

inline int product(int a , int b ){
    return a*b;                            
}

int main(){
    int a ,b;
    cout<<"Enter the value of a and b:"<<endl;
    cin>>a>>b;
    cout<<"The product is "<<product(a,b)<<endl;
    cout<<"The product is "<<product(a,b)<<endl;
    cout<<"The product is "<<product(a,b)<<endl;
    
    return 0;
}