#include<iostream>
#include<utility>
#include<vector>
/*
he pair container is a simple container defined in <utility> header consisting of two data elements or objects.

The first element is referenced as ‘first’ and the second element as ‘second’ and the order is fixed (first, second).
Pair is used to combine together two values which may be different in type. Pair provides a way to store two heterogeneous objects as a single unit.
Pair can be assigned, copied and compared. The array of objects allocated in a map or hash_map are of type ‘pair’ by default in which all the ‘first’ elements are unique keys associated with their ‘second’ value objects.
To access the elements, we use variable name followed by dot operator followed by the keyword first or second.
*/
using namespace std;
int main()
{
        pair<int ,char> p1;
        //initialing a pair
        pair<int,int>p2(20,30);
        pair<string,int>p3;
        p1.first=10;
        p1.second='a';
        cout<<p1.first<<" "<<p1.second<<endl;
        cout<<p2.first<<" "<<p2.second<<endl;

        //Creating Pair without explicitly mentioning pair by make_pair
        p3=make_pair("Parth ",1);
        cout<<p3.first<<" "<<p3.second<<endl;

        //using logical operators
        pair<int, int>pair1 = make_pair(1, 12);
        pair<int, int>pair2 = make_pair(9, 12);


        cout << (pair1 == pair2) << endl;
        cout << (pair1 != pair2) << endl;
        //Compares only first element
        cout << (pair1 >= pair2) << endl;
        cout << (pair1 <= pair2) << endl;
        cout << (pair1 > pair2) << endl;
        cout << (pair1 < pair2) << endl;

    return 0;
}
