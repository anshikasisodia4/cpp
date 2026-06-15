#include <iostream>
using namespace std;

int main(){
    for ( int i = 0; i <=5; i++)
    {
        
        if(i==2){
            break;  // exit the loop
        }
        cout<<i<<endl;

       // if break is before the cout the term at which break is applied does not prints and loop stops
       // if the break is applied after the print statement the break term will be  print and then loop stops
        
    }
   
    return 0;
}