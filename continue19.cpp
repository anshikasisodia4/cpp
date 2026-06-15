#include <iostream>
using namespace std;

int main(){
    for (int i = 0; i <= 5; i++)
    {
        if(i==3){
            continue; // skip 3 and move to next iteration
        }
        cout<<i<<endl;
    }
    
    return 0;
}