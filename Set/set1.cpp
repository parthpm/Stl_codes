//A set is a data structure that maintains a collection of elements. The basic
//operations of sets are element insertion, search and removal.Elements are distinct.

#include<iostream>
#include<set>

using namespace std;

int main()
{
    set<int> s;
    s.insert(3);
    s.insert(2);
    s.insert(5);
    s.insert(5);

    cout << s.count(3) << "\n"; // 1
    cout << s.count(4) << "\n"; // 0
    s.erase(3);
    s.insert(4);
    cout << s.count(3) << "\n"; // 0
    cout << s.count(4) << "\n"; // 1
    cout<< s.count(5)<<"\n";

    set<int>s2={2,3,5,4};
    for(auto x:s2)
    {
        cout<<x<<" ";
    }

    return 0;
}
