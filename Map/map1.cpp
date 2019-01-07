/*
Maps are associative containers that store elements in a mapped fashion.
Each element has a key value and a mapped value.
No two mapped values can have same key values.

*/

#include<iostream>
#include<map>
#include<iterator>
using namespace std;



int main()
{   map<int,int>m1;
    pair<int,int>p1=make_pair(10,20);
    map<int,int>::iterator itr;
    map<string,int> m3;
    m3.insert(make_pair("Parth",1));
    m3.insert({"Hello",2});

    //Printing in python like fashion
    cout<<m3["Parth"]<<" "<<m3["Hello"]<<endl;



    m1.insert(p1);
    m1.insert(pair<int,int>(20,30));
    m1.insert(pair<int,int>(30,40));
    m1.insert(pair<int,int>(40,50));
    m1.insert(pair<int,int>(50,60));

    for(auto i=m1.begin();i!=m1.end();i++)
    {
        cout<<"\t"<<i->first;
        cout<<"\t"<<i->second;
        cout<<endl;
    }
    //#another way
  /*      for(itr=m1.begin();itr!=m1.end();itr++)
    {
        cout<<"\t"<<itr->first;
        cout<<"\t"<<itr->second;
        cout<<endl;
    } */

    //#Assigning the values to m2
    map<int,int>m2(m1.begin(),m1.end());
    cout<<"Size of m2 is "<<m2.size();
    m2.erase(10);
    m2.erase(20);//key,position,(pos1,pos2)
    cout<<"\nAfter Erasing 10 and keys in m2:"<<endl;
        for(auto i=m2.begin();i!=m2.end();i++)
    {
        cout<<"\t"<<i->first;
        cout<<"\t"<<i->second;
        cout<<endl;
    }

    return 0;

}
