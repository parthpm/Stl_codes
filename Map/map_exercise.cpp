#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    map<string,int>m;
    int q;
    cin>>q;
    while(q--)
    {
        int type=0;
        cin>>type;

        if(type==1)
        {   string str;
             int mark;
            cin>>str>>mark;
            if(m.find(str)!=m.end())
            {
                m[str]+=mark;
            }
            else
            m.insert({str,mark});

        }
        else if(type==2)
        { string str;
            cin>>str;
            m.erase(str);
        }
        else if(type==3)
        {
            string str;
           cin>>str;
           int mar=m[str];

            cout<<mar<<endl;
        }
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
/*
You are appointed as the assistant to a teacher in a school and she is correcting the answer sheets of the students.Each student can have multiple answer sheets.So the teacher has  queries:

1 x y:Add the marks y to the student whose name is x .

2 x : Erase the marks of the students whose name is x.

3 x :Print the marks of the students whose name isx . (If  didn't get any marks print 0.)
*/



