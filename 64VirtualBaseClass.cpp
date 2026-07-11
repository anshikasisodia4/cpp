#include <iostream>
using namespace std;
// virtual base class is used to remove ambiguity

class Student
{
protected:
    int roll_no;

public:
    void set_number(int a)
    {
        roll_no = a;
    }
    void print_number(void)
    {
        cout << "Roll number : " << roll_no << endl;
    }
};

class Test : virtual public Student
{
protected:
    float maths, physics;

public:
    void set_marks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }
    void print_marks(void)
    {
        cout << "Result:" << endl;
        cout << "Maths : " << maths << endl;
        cout << "Physics : " << physics << endl;
    }
};

class Sports : virtual public Student
// class Sports : public virtual  Student
{
protected:
    float score;

public:
    void set_score(float sc)
    {
        score = sc;
    }
    void print_score()
    {
        cout << "Sports : " << score << endl;
    }
};

class Result : public Test, public Sports
{
private:
    float total;

public:
    void display()
    {
        total = maths + physics + score;
        print_number();
        print_marks();
        print_score();
        cout << "Your total score is " << total << endl;
    }
};

int main()
{
    Result anshika;

    anshika.set_number(1);
    anshika.set_marks(98, 97);
    anshika.set_score(9);
    anshika.display();

    return 0;
}