#include <iostream>
#include <cmath>
using namespace std;

class SimpleCalculator
{
    float a;
    float b;

public:
    void getData1()
    {
        cout << "Simple Calculator" << endl;
        cout << "Enter first number: " << endl;
        cin >> a;
        cout << "Enter secod number :" << endl;
        cin >> b;
    }

    void Calculate1()
    {
        cout << "The sum is " << a + b << endl;
        cout << "The subtraction is " << a - b << endl;
        cout << "The product is " << a * b << endl;
        cout << "The division is " << a / b << endl;
    };
};

class ScienificCalculator
{
    float a;
    float b;

public:
    void getData2()
    {
        cout << endl;
        cout << "Scientific Calculator" << endl;
        cout << "Enter first number " << endl;
        cin >> a;
        cout << "Enter second number :" << endl;
        cin >> b;
    }

    void Calculate2()
    {
        cout << "The cos of " << a << " is " << cos(a) << endl;
        cout << "The sin of " << a << " is " << sin(a) << endl;
        cout << "The exponential is " << exp(a) << endl;
        cout << "The tan of " << a << " is " << tan(a) << endl;
    };
};

// multiple inheritance using public mode

class HybridCalculator : public SimpleCalculator, public ScienificCalculator
{
public:
    void show()
    {
        cout << "Hybrid Calculator" << endl;
       
    }
};

int main()
{
    HybridCalculator calc;
    calc.getData2();
    calc.Calculate2();
    calc.getData1();
    calc.Calculate1();

    return 0;
}