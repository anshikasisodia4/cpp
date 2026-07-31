#include <iostream>
#include <functional>
#include <algorithm>

using namespace std;

int main()
{
    // function object (FUNCTOR): function wrapped in a class so that is available like an object
    int arr[] = {1, 73, 4, 2, 54, 16};

    // sort(arr,arr+6);                // ascending
    sort(arr, arr + 6, greater<int>()); // descending
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}