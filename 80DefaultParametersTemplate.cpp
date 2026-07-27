#include <iostream>
using namespace std;

template <class  T1 = int, class T2= float , class T3 =char>

class Anshika {
    public:
    T1 a;
    T2 b;
    T3 c;
    Anshika(T1 x , T2 y, T3 z){
        a=x;
        b=y;
        c=z;
    }
    void display(){
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
        cout<<"The value of c is "<<c<<endl;
    }
};
int main(){

    Anshika <> a(4,6.4,'f');
    a.display();
    cout<<endl;
    Anshika <float,char,char> s(1.4, 'a', 'b');
    s.display();

    return 0;
}