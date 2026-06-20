#include <iostream>
using namespace std;

struct employee
{
    int eId;
    char favChar;
    float salary;
};

int main(){
    struct employee anshika;
    anshika.eId = 1;
    anshika.favChar= 't';
    anshika.salary = 240000;

    cout<<"The salary is "<<anshika.salary<<endl;
    cout<<"The Id is "<<anshika.eId<<endl;
    cout<<"The favChar is "<<anshika.favChar<<endl;

    
    return 0;
}

// ep relpaces struct employee

// typedef struct employee
// {
//     int eId;
//     char favChar;
//     float salary;
// } ep;

// int main(){
//     ep anshika;
//     anshika.eId = 1;
//     anshika.favChar= 't';
//     anshika.salary = 240000;

//     cout<<"The salary is "<<anshika.salary<<endl;
//     cout<<"The Id is "<<anshika.eId<<endl;
//     cout<<"The favChar is "<<anshika.favChar<<endl;

//     return 0;
// }