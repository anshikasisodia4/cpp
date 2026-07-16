#include <iostream>
using namespace std;

class BaseClass
{
public:
    int var_base;
    void display()
    {
        cout << "Displaying base class variable var_base " << var_base << endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    int var_derived;
    void display()
    {
        cout << "Displaying base class variable var_base " << var_base << endl;
        cout << "Displaying derived class variable " << var_derived << endl;
    }
};

int main()
{
    // polymorphism : one name and molutiple forms
    /*
    1. compile time polymorphism (early binding): achieved by function overloading and by operator overloading
    2. run time polymorphism (late binding) : by virtual functions
    */

    BaseClass *base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;
    base_class_pointer = &obj_derived; // pointing base class pointer to derived class

    base_class_pointer->var_base = 34;
    // base_class_pointer->var_derived = 134; // it will throw error
    // properties inherited from base class can be accesed using base class pointers
    base_class_pointer->display();

    base_class_pointer->var_base = 3400;
    base_class_pointer->display();

    DerivedClass *derived_class_pointer;
    derived_class_pointer = &obj_derived;
    derived_class_pointer->var_base = 950;
    derived_class_pointer->var_derived = 98;
    derived_class_pointer->display();

    return 0;
}