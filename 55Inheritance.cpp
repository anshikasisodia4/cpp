#include <iostream>
using namespace std;

// base class

class Employee
{
public:
    int id;
    float salary;
    Employee(int inpId)
    {
        id = inpId;
        salary = 34.0;
    }
    Employee() {}
};

// derived class syntax

/*
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
class members/methods/etc..
}
NOTE:
1. default visibility mode is private
2. private visibility mode : public members of the base class becomes private members of the derived class
3. public visibility mode : public members of base classs becomes public members of derived class
4. private members are never inherited
*/

// creating a programmer class derived from employee base class
class Programmer : Employee
{
public:
    int languageCode = 9;
    Programmer(int inpId)
    {
        id = inpId;
        languageCode = 9;
    }

    void getData()
    {
        cout << id << endl;
    }
};

int main()
{
    Employee anshika(1), aaru(2);
    cout << anshika.salary << endl;
    cout << aaru.salary << endl;
    Programmer skillF(10);
    cout << skillF.languageCode << endl;
    // cout<<skillF.id<<endl;    this will give error as id is privately derived
    skillF.getData();

    return 0;
}

// Inheritance types
/*
1. single inheritance  : one derived class from one base class
2. multiple inheritance  : one derived class from more than one base class
3. hierarchial inheritance  : several derived class from single base class
4. multilevel inheritance : deriving a class from already derives class
5. hybrid inheritance : combination of multiple inheritance and multilevel inheritance (one parent class is not base class)
*/