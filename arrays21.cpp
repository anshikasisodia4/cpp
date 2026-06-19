#include <iostream>
using namespace std;

int main(){
    //  Pointers: collection of items of simmilar datatype
    int marks[4] =  {23,45,56,67};
    int mathMarks[4];
    mathMarks[0]=78;
    mathMarks[1]=89;
    mathMarks[2]=88;
    mathMarks[3]=98;

    cout<<"Marks of Maths are "<<endl;

    cout<<mathMarks[0]<<endl;
    cout<<mathMarks[1]<<endl;
    cout<<mathMarks[2]<<endl;
    cout<<mathMarks[3]<<endl;

    cout<<"Marks are"<<endl;
    marks[2]=55;  // you can change the value of any array

    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;

    //print array using  for loop

    cout<<"Marks are"<<endl;           
    for (int i = 0; i < 4; i++)
    {
        cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
    }

    // print array using while loop
    // int i=0;
    // while(i<4){
    //     cout<<"The marks are ";
    //     cout<<marks[i]<<endl;
    //     i++;
    // }
    
    //print array using do while loop
    // int i=0;
    // do{
    //     cout<<"The marks are ";
    //     cout<<marks[i]<<endl;
    //     i++;
    // }
    // while(i<4);
  
    
    return 0;
}