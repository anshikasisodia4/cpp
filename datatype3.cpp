#include <iostream>

using namespace std;
int global=6;

void sum(){
    int a;
    cout<<global;// global first then local variable
}
// if both global and local variable have same name then preference will be given to local variable

int main(){
    int global=12;
    global=14;

    int a = 2 ,b = 3;
    int c = 4;
    float pi = 3.14;
    char d='u';
    bool is_true=false;
    sum();

    // cout<<"The value of a is "<<a<<".\nThe value of b is "<<b;
    // cout<<". \nThe value of c is "<<c;
    // cout<<".\nThe value of d id "<<d;
    // cout<<global;
    cout<<is_true;// 1 in optput represents true 0 represents false

    return 0;
}