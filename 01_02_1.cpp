//https://www.codechef.com/FEB19B/problems/DEPCHEF
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int testcase,n;
    cin>>testcase;
    while(testcase--)
    {
        cin>>n;
        int *a=new int[n];
        int *d=new int[n];

        for(int i=0;i<n;i++)
      cin>>a[i];


        for(int i=0;i<n;i++)
          cin>>d[i];

        int dd=-1;

        for(int i=1;i<n-1;i++)
        {
            if(d[i]>a[i-1]+a[i+1])
                dd=max(dd,d[i]);
        }
        if(d[0]>a[1]+a[n-1])
            dd=max(dd,d[0]);

        if(d[n-1]>a[0]+a[n-2])
            dd=max(dd,d[n-1]);

            cout<<dd<<endl;
}

    return 0;
}
