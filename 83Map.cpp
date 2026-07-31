#include <iostream>
#include <map>
#include <string>
using namespace std;

// map is an associative array
int main()
{
    map<string, int> marksMap;

    marksMap["Anshika"] = 98;
    marksMap["Aaru"] = 97;
    marksMap["kashish"] = 99;

    marksMap.insert({{"gunjan", 97}, {"leena", 100}});

    map<string, int>::iterator iter;
    for (iter = marksMap.begin(); iter != marksMap.end(); iter++)
    {
        cout << (*iter).first << " " << (*iter).second << endl;
    }

    cout << "The size is " << marksMap.size() << endl;
    cout << "The maximum size is " << marksMap.max_size() << endl;
    cout << "The empty's return value is " << marksMap.empty() << endl;

    return 0;
}