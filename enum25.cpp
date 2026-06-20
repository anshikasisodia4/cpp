#include <iostream>
using namespace std;

int main(){

    enum Meal{breakfast , lunch, dinner};
    // meal is a data type
    Meal m1 = breakfast;
    cout<<m1<<endl;
    Meal m2 =  lunch;
    cout<<m2<<endl;
    cout<<endl;

    cout<<(m1 == 0)<<endl;   // true this will return 1
    cout<<(m1==1)<<endl;
    cout<<endl;

    cout<<breakfast<<endl;    //0
    cout<<lunch<<endl;        //1
    cout<<dinner<<endl;       //2

    return 0;
}