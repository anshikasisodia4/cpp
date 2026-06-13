#include <iostream>
using namespace std;

 int main(){
    char letter;
    cout<<"Enter letter:"<<endl;
    cin>>letter;

    switch (letter)                  //without break each case will execute including default 
                                     // when the case matches the control will be out of the switch statement 
    {
    case 'a':   
        cout<<"vowel"<<endl;
        break;
    case 'e':
        cout<<"vowel"<<endl;
        break;
    case 'i':
        cout<<"vowel"<<endl;
        break;
    case 'o':
        cout<<"vowel"<<endl;
        break;
    case 'u':
        cout<<"vowel"<<endl;
        break;
    case 'A':
        cout<<"vowel"<<endl;
        break;
    case 'E':
        cout<<"vowel"<<endl;
        break;
    case 'I':
        cout<<"vowel"<<endl;
        break;
    case 'O':
        cout<<"vowel"<<endl;
        break;
    case 'U':
        cout<<"vowel"<<endl;
        break;
    
    default:
    cout<<"consonant"<<endl;
        break;
    }
    cout<<"Done with Switch case";

    return 0;
 }
