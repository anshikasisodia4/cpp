#include <iostream> //clicking on header file by pressing ctrl opens the header file

// this is a system header file : it comes with compiler
// user defined header files: written by programmer

#include "this.h" // this will give an error if this.h named file is not present in the current directory

using namespace std;

int main(){
    cout<<"hello world";
    return 0;
}