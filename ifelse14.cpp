#include <iostream>

using namespace std;
                        //Selection Control Structure 
                        //if else ladder  
int main(){
    int marks;
    cout<<"Enter Marks:"<<endl;
    cin>>marks;

    if(marks>90){
        cout<<"grade A"<<endl;
    }
    else if(marks>60){
        cout<<"Grade B"<<endl;
    }
    else{
        cout<<"Grade C"<<endl;
    }

    return 0;
}