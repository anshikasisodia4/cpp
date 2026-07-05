#include <iostream>
using namespace std;
class Complex
{
    int a, b;
public:
  
    Complex(void);
    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

int main(){
    
    return 0;
}