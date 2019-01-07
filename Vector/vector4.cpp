#include<iostream>
#include<vector>

using namespace std;

int main()
{   vector<int>vector1;
    vector<int>vector2;

    vector1.push_back(10);
    vector1.push_back(20);

        vector2.push_back(100);
    vector2.push_back(200);

   // cout<<vector1.at(0)<<" " <<vector1.at(1);
  // cout<<endl<<vector1.size();

    vector<vector<int>>vector2d;
    vector2d.push_back(vector1);
    vector2d.push_back(vector2);

/*for(auto i=vector2.begin();i!=vector2.end();i++)
    {
     cout<<" "<<endl<<*i;
    }

    for(int  i=0;i,vector2d.size();i++)
    {
     for(int  j=0;j<vector2d.at(i).size();j++)
    {
    // cout<<" "<<vector2d.at(i).at(j);

    }
    cout<<endl;
    }*/
cout<<vector2d.at(0).at(0)<<endl;
cout<<vector2d.at(0).at(1)<<endl;
cout<<vector2d.at(1).at(0)<<endl;
cout<<vector2d.at(1).at(1)<<endl;

    return 0;
}
