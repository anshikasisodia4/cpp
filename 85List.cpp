#include <iostream>
#include <list>
using namespace std;

void display(list<int> &lst)
{
    list<int>::iterator it;
    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}
int main()
{
    list<int> list1;

    list1.push_back(4);
    list1.push_back(7);
    list1.push_back(2);
    list1.push_back(8);
    list1.push_back(9);

    // list<int>::iterator iter;
    // iter = list1.begin();
    // cout << *iter << endl;
    // ;
    // iter++;
    // cout << *iter;

    display(list1);
    // removing elements from list
    // list1.pop_back();
    // list1.pop_back();
    // list1.pop_front();
    // list1.remove(9);

    // sort the list
    // list1.sort();

    // display(list1);

    list<int> list2(3);
    list<int>::iterator iter;
    iter = list2.begin();
    *iter = 45;
    iter++;
    *iter = 6;
    iter++;
    *iter = 9;
    iter++;
    display(list2);

    // sorting and merging
    list1.sort();
    list2.sort();
    list1.merge(list2);
    cout << "List 1 After merging : ";
    display(list1);

    // reversing
    list1.reverse();
    display(list1);

    return 0;
}