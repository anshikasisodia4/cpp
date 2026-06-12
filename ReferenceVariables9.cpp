#include <iostream>
using namespace std;

int main(){
    float x = 12;
    float & y = x;   // Reference Variable

    cout<<x<<endl;
    cout<<y<<endl;

    return 0;
}