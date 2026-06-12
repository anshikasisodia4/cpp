#include <iostream>
using namespace std;

 int main(){

                           // literals
    float a=2.5F;
    long double b=2.5L;
     // by default decimal value is considered as double in c++

     cout<<"The value of a is "<<a<<endl<<"The value of b is "<<b<<endl;
     

     cout<<"The size of 2.5 is "<<sizeof(2.5)<<endl;       //double
     cout<<"The size of 2.5F is "<<sizeof(2.5F)<<endl;     //float
     cout<<"The size of 2.5L is "<<sizeof(2.5L)<<endl;     //long double
     cout<<"The size of 2.5f is "<<sizeof(2.5f)<<endl;     //float
     cout<<"The size of 2.5l is "<<sizeof(2.5l)<<endl;     //long double

    return 0;
 }
