#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{   int i;
    vector <int>v;
    do
    {
        cin>>i;
        v.push_back(i);
    }while(i!=-1);
    i=0;

    while(v.at(i)!=-1)
    {
        cout<<v.at(i)<<"\n";
        i++;

    }
    cout<<"\n";
    sort(v.begin(),v.end());
    v.erase(v.end());
    for(auto i=v.begin();i!=v.end();i++)
    {
        cout<<*i<<" ";
    }
    return 0;
}

