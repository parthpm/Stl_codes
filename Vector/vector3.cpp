#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> arr = { 1, 2, 3, 32,44,5,54, 5,6,6,5,8,9 };
    vector <int> v;
 /*   for(int i=0;i<5;i++)
    {
        v.push_back(i);
        cout<<v[i]<<endl;
        cout<<ar.at(i);
    }*/
    cout << "Output of begin and end: ";
    for(auto i=arr.begin();i!=arr.end();i++)
    {
        cout<<*i<<" ";
    }
    cout<<endl;


    arr.insert(arr.end(),121);

      for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";

    }

    int result=*max_element(arr.begin(), arr.end());
    cout<<"\n"<<"Size fo vector is "<<arr.size()<<endl;
    cout<<"Capacity of vetor is "<<arr.capacity();
    cout<<"MAximum element is"<< result;


    return 0;



}
