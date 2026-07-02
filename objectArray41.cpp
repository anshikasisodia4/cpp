#include <iostream>
using namespace std;

class Employee
{
    int id;
    int salary;

public:
    void setId(void)
    {
        salary = 122;
        cout << "Enter the id of employee" << endl;
        cin >> id;
    }
    void getItd(void)
    {
        cout << "The id of the employee is " << id << endl;
        cin >> id;
    }
};

int main()
{
    // Employee Anshika ,Kashish, Aaru, Leena;
    // Anshika.setId();
    // Anshika.getItd();
    Employee fb[4];
    for (int i = 0; i < 4; i++)
    {
        fb[i].setId();
        fb[i].getItd();
    }

    return 0;
}