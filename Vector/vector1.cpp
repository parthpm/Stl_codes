#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector <int> v(5,23);
    //vector <int> v2{1,2,3,4,5};
    for(int i=0;i<5;i++)
    {
        cout<<v[i]<<endl;
       // cout<<v2.at(i);

    }
    string s;
    getline(cin,s);
    cout<<s;
    return 0;
}
