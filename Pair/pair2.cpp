#include<vector>
#include<iostream>
#include<utility>
using namespace std;
int main()
{
    pair<char, int>pair1 = make_pair('A', 1);
    pair<char, int>pair2 = make_pair('B', 2);

    cout << "Before swapping:\n " ;
    cout << "Contents of pair1 = " << pair1.first << " " << pair1.second ;
    cout << "Contents of pair2 = " << pair2.first << " " << pair2.second ;
    pair1.swap(pair2);

    cout << "\nAfter swapping:\n ";
    cout << "Contents of pair1 = " << pair1.first << " " << pair1.second ;
    cout << "Contents of pair2 = " << pair2.first << " " << pair2.second ;

    string str="Parth";
    cout<<str.substr(0,2)<<endl;
    cout<<str.substr(1,2);

    // Take any string
    string s1 = "Geeks";

    // Copy three characters of s1 (starting
    // from position 1)
    string r = s1.substr(1, 3);

    // prints the result
    cout << "String is: " << r;


    return 0;
}


