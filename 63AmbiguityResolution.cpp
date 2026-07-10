#include <iostream>
using namespace std;

class B
{
public:
    void say()
    {
        cout << "Hello World " << endl;
    }
};
class D : public B
{
    int a;

public:
    // the derived class inherits the base function automatically if no public function in derived class
    //  here public function is present so new say() method overwrites the function in B class
    void say()
    {
        cout << "Hi" << endl;
    }
};

int main()
{
    B b;
    b.say();
    D d;
    d.say();

    return 0;
}