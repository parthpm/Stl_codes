#include <bits/stdc++.h>

using namespace std;

// Complete the hourglassSum function below.
int hourglassSum(vector<vector<int> > arr) {
        vector <int>v;
        for(int i=0;i<4;i++)
        {
            for(int j=0;j<4;j++)
            {
                int result;
                result=arr.at(i).at(j)+arr.at(i).at(j+1)+arr.at(i).at(j+2)+arr.at(i+1).at(j+1)+arr.at(i+2).at(j)+arr.at(i).at(j+1)+arr.at(i+2).at(j+2);
                v.push_back(result);
            }
        }
        return  *max_element(v.begin(), v.end());



}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    vector<vector<int> > arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = hourglassSum(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}

