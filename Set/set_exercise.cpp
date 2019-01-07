#include<iostream>
#include<map>
#include<utility>
#include<set>
#include<stdio.h>

using namespace std;
int main()
{   int t;
    map<string,int>m;
    cin>>t;
    while(t--)
    {   string str;
        int k,n;
        scanf("%d %d",&n,&k);
        cin>>str;
        set<string>st;
        //int i=1;
        //const int value=1;
        for(int i=0;i<n-k+1;i++)
        {
            string temp=str.substr(i,k);
            st.insert(temp);
            //cout<<temp<<"\n";
        }
        cout<<st.size()<<"\n";


    }

    return 0;
}
//https://www.spoj.com/problems/ADACLEAN/
