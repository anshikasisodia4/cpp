#include <iostream>
using namespace std;

class Complex
{
    int a, b;

    // creating a constructor
    // constructor is a special member function with same name as of the class
    // it is used to initialize the objects of its class
    // it is automatically invoked whenever ab object is created
    // it is used to initialise the objects of its class
public:
    // constructor declaration
    Complex(void);
    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};
// default constructor as it takes no parameter
Complex::Complex(void)
{
    // if no valuye allocated garbage value will be set by compiler
    a = 0;
    b = 0;
    cout << "Hello World" << endl;
}

int main()
{
    Complex c1, c2;
    c1.printNumber();
    c2.printNumber();
    return 0;
}
/* properties of constructor
 1.it should be declared in the public section of the class
 2. they are automatically invoked whenever the object is created
 3. they cannot return values and do not have return types
 4. it can have default arguments
 5. we cannot referred to their address
*/