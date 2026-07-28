#include <iostream>
using namespace std;

template <class T>
class Anshika
{
public:
    T data;
    Anshika(T a)
    {
        data = a;
    }
    void display();
};

template <class T>
void Anshika<T>::display()
{
    cout << data;
}

void func(int a)
{
    cout << endl
         << "First Function() " << a << endl;
}

template <class T>
void func(T a)
{
    cout << "I am templatised function() " << a << endl;
}
template <class T>
void func1(T a)
{
    cout << "I am templatised function() " << a << endl;
}

int main()
{
    // Anshika<float> s(6.75);
    Anshika<int> s(7);
    cout << s.data << endl;
    s.display();
    func(4);  // exact match takes the highest priority
    func1(4); // exact match takes the highest priority

    return 0;
}