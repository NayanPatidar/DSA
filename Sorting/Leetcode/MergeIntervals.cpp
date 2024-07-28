#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

vector<vector<int>> merge(vector<vector<int>>& intervals) {
    vector<vector<int>> vec = intervals;
    sort(vec.begin(), vec.end(), [](const vector<int>& a, const vector<int>& b) {
        return a[0] < b[0];
    });

    for(int i = 0 ; i < vec.size()-1; i++){
        if (vec[i][1] - vec[i+1][0] >= 0)
        {
            if (vec[i][1] < vec[i+1][1])
            {
                vec[i][1] = vec[i+1][1];
            } else {
                vec[i+1][1] = vec[i][1];
            }
            
            vec.erase(vec.begin() + i+1);
            i--;
        }
    }

    return vec;
}

int main(){
    // [[1,3],[2,6],[8,10],[15,18]]
    // [1,4],[0,4]
    // [1,4],[0,2],[3,5]
    vector<vector<int>> vec = {{1,4},{0,2},{3,5}};
    vector<vector<int>> result = merge(vec);
    for (const vector<int> val : result)
    {
        for (const int val : val)
        {
            cout << val << " ";
        }
        cout << endl;
    }
    
}