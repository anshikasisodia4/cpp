#include <iostream>
using namespace std;

union money{
        int rice;         //use only one type of data at a time because memory is shared among all the members
        char car;
        float pounds;

    };

int main(){
    union money m1;
    m1.rice = 45;
    m1.car = 'c';          // output will be a garbage value
    cout<<m1.rice<<endl;
  
    return 0;
}