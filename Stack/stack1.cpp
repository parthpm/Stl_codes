//Stacks are a type of container adaptors with LIFO(Last In First Out) type of working,
//where a new element is added
//at one end and (top) an element is removed from that end only.
#include<iostream>
#include<stack>

using namespace std;
void showstack(stack <int> s)
{
    cout<<"\n";
    while(!s.empty())
    {
        cout<<" "<<s.top();
        s.pop();
    }
    cout<<"\n";
}
int main()
{
     stack<int> a;
     a.push(1);
     a.push(2);
     a.push(32);
     a.push(100);

     showstack(a);

     cout<<"Size is "<<a.size()<<endl;
     cout<<"Top is "<<a.top();

    a.pop();
    showstack(a);
    return 0;
}



