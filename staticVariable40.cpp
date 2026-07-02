#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;

    // count is static data member of class employee
    // static varibale
    // by dfault it initialize with zero
    // without static there will be no individual count for each object
    // static variables are also called class variables
    // it has only one copy
    // scope is inside the class
    // lifetime till the prpgram terminates

public:
    void setData(void)
    {
        cout << "Enter the id " << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The id of this employee is " << id << " and this is employee number " << count << endl;
    }

    // static member function

    static void getCount(void)
    {
        cout << "The value of count is " << count << endl;
        // cout<<id;      // it will give error
    }
};

int Employee::count = 0;

int main()
{
    Employee Anshika, Kashish;
    // Anshika.id=1; this will give an error as id is private

    Anshika.setData();
    Anshika.getData();
    Employee::getCount();

    Kashish.setData();
    Kashish.getData();
    Employee::getCount();

    return 0;
}