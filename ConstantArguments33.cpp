#include <iostream>
using namespace std;

// function parameter should not be modified inside the function

void display(const int x){
    cout<<"Value of x = "<<x<<endl;
} 

int main(){
    display(10);
    
    return 0;
}