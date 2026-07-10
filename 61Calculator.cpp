#include <iostream>
#include <cmath>
using namespace std;

class SimpleCalculator
{
protected:
    float a;
    float b;
    float sum, minus, division, product;

public:
    void get1()
    {
        cout << "Simple Calculator" << endl;
        cout << "Enter two numbers: " << endl;
        cin >> a >> b;
    }
    void Calculate1()
    {
        sum = a + b;
        minus = a - b;
        product = a * b;
        division = a / b;
    }
    void show1()
    {
        cout << "The sum is " << sum << endl;
        cout << "The subtraction is " << minus << endl;
        cout << "The product is " << product << endl;
        cout << "The division is " << division << endl;
    };
};

class ScienificCalculator
{
protected:
    float a;
    float b;
    float exponential, squareRoot, power, logarithm;

public:
    void get2()
    {
        cout << endl;
        cout << "Scientific Calculator" << endl;
        cout << "Enter two numbers: " << endl;
        cin >> a >> b;
    }
    void Calculate2()
    {
        exponential = exp(a);
        power = pow(a, b);
        logarithm = (a >= 0) ? log(a) : NAN;
        squareRoot = (a >= 0) ? sqrt(a) : NAN;
    }
    void show2()
    {
        cout << "The exponential of " << a << " is " << exponential << endl;
        cout << "The square Root of " << a << " is " << squareRoot << endl;
        cout << "The powerCalculation is " << power << endl;
        cout << "The log of " << a << " is " << logarithm << endl;
    };
};

class HybridCalculator : public ScienificCalculator, public SimpleCalculator
{
public:
    void show()
    {
        cout << "Hybrid Calculator" << endl;
        cout << "Simple calculator sum +  scientific calculator : " << sum + power << endl;
    }
};

int main()
{
    HybridCalculator calc;
    calc.get1();
    calc.Calculate1();
    calc.show1();
    calc.get2();
    calc.Calculate2();
    calc.show2();
    calc.show();

    return 0;
}