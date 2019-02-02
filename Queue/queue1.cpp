//Queues are a type of container adaptors which operate in a first in first out (FIFO) type of arrangement.
// Elements are inserted at the back (end) and are deleted from the front.

#include<iostream>
#include<queue>
using namespace std;

void showq(queue<int> gq);
int main()
{
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(3);

    cout << "The queue g is : ";
    showq(q);

    cout << "\nq.size() : " << q.size();
    cout << "\nq.front() : " << q.front();
    cout << "\nq.back() : " << q.back();
    q.pop();
    q.pop();
    q.pop();

    cout << "\nq.pop() : ";
    q.pop();
    showq(q);

    return 0;
}

void showq(queue<int> gq)
{
        while(!gq.empty())
        {
            cout<<"\t"<<gq.front();
            gq.pop();
        }
        printf("\n");
}
