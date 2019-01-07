#include<iostream>
#include<map>
#include<utility>

using namespace std;
int main()
{
    //Erasing a given range in map
    map<int,int> m;
    pair<int,int>p1(3,35);
    m.insert({1,30});
    m.insert(make_pair(2,20));
    m.insert(p1);
    m.insert({4,30});
      m.insert({5,40});

     cout << "The map before using erase() is : \n";
    cout << "KEY\tELEMENT\n";
    for (auto itr = m.begin(); itr != m.end(); ++itr) {
        cout << itr->first
             << '\t' << itr->second << '\n';
    }

    //find() returns the iterator where the value
    //Gives the iterator to the element val if it is found otherwise returns m.end()
    auto it1=m.find(1);
    auto it2=m.find(4); //upto this it will be removed not including it2

    m.erase(it1,it2);
    cout<<"\nAfter erasing\n";
       for (auto itr = m.begin(); itr != m.end(); ++itr) {
        cout << itr->first
             << '\t' << itr->second << '\n';
    }


    return 0;
}
