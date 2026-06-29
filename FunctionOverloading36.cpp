#include <iostream>
using namespace std;

int sum(float a ,int b){
    cout<<"Using function with 2 arguments:"<<endl;
    return a+b;
}

int sum(int a ,int b, int c){
    cout<<"Using function with 3 argumnets:"<<endl;
    return a+b+c;
}

//volume of cylinder
int volume(double r , int h){
    return (3.14 *r*r*h);
}

//volume of cube
int volume(int a){
    return a*a*a;
}

// volume of cuboid
int volume(int l, int b,int h){
    return (l*b*h);
}

int main(){
    cout<<"The sum of 3 and 6 is "<<sum(3,6)<<endl;
    cout<<"The sum of 3,6 and 7 is "<<sum(3,6,7)<<endl;
    cout<<endl;
    cout<<"The volume of cube is "<<volume(3)<<endl;
    cout<<"The volume of cuboid is "<<volume(3,4,5)<<endl;
    cout<<"The volume of cylinder is "<<volume(3,6)<<endl;
    
    return 0;
}