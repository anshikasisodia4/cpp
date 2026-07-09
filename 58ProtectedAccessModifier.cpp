#include <iostream>
using namespace std;

class Base
{
protected: // private but can be inherited
    int a;

private:
    int b;
};
/*
for a protected member:
                        public derivation      private derivation      protected derivation
  1. private members     not inherited           not inherited            not inherited
  2. protected           protected               private                  protected
  3. public              public                  private                  protected
*/

class Derived : protected Base
{
};

int main()
{
    Base b;
    Derived d;
    // cout<<b.a<<endl;  // it will not work since a is not protected  in both case as well as derivd class


    return 0;
}