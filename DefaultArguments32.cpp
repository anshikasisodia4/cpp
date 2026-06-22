#include <iostream>
using namespace std;

//factor 1.04 is default here
// default arguments at right side

float moneyRecieved(int currentMoney , float factor =1.04){
    return currentMoney * factor;
}

int main(){
    int money = 4000;
    cout<<"If you have "<<money<<" Rs in your account, you will recieve "<<moneyRecieved(money)<<"Rs after one year"<<endl;
    cout<<"Special:If you have "<<money<<" Rs in your account, you will recieve "<<moneyRecieved(money,1.1)<<"Rs after one year";

    return 0;
}