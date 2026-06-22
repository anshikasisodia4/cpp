#include <iostream>
using namespace std;

int product(int a , int b){
    static  int c=0;   //This executes only one value of c will be increased
    c = c+1;
    return a*b+c;

}

int main(){
    int a ,b;
    cout<<"Enter two numbers :"<<endl;
    cin>>a>>b;
    cout<<"The value of expression is "<<product(a,b)<<endl;
    cout<<"The value of expression is "<<product(a,b)<<endl;
    cout<<"The value of expression is "<<product(a,b)<<endl;
    cout<<"The value of expression is "<<product(a,b)<<endl;
    
    return 0;
}