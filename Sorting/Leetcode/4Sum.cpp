#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> fourSum(vector<int>& nums, int target) {
    vector<vector<int>> NewVector;
    std::sort(nums.begin(), nums.end());
    int size = nums.size();
    
    for (int i = 0; i < size-3; i++)
    {
        // if (i > 0 && nums[i] == nums[i-1])
        // {
        //     continue;
        // }
        for (int j = i+1; j < size-2; j++)
        {
            cout << j << endl;
            if (j > 1 && nums[j] == nums[j-1])
            {
                continue;
            }
            
            int l = j+1;
            int r = size - 1;

            while (l < r)
            {
                int total = nums[i] + nums[j] + nums[l] + nums[r];
                cout << " l : " << l << " r : " << r << endl;
                if (total < target)
                {
                    l++;
                } else if (total > target){
                    r--;
                } else {
                    vector<int> gotVec = { nums[i], nums[j], nums[l], nums[r] };
                    NewVector.push_back(gotVec);
                    while ( l < r && nums[l] == gotVec[2])
                    {
                        l++;
                        cout << " l : " << l << endl;
                    }
                    while ( l < r && nums[r] == gotVec[3])
                    {
                        r--;
                        cout << " r : " << r << endl;
                    }  
                }
            }
        }
    }   
    return NewVector;
}

int main(){
    vector<int> vec = {-2,-1,-1,1,1,2,2};
    int target = 0;
    vector<vector<int>> Result = fourSum(vec, target);
    for (const vector<int>& i : Result)
    {
        for (const int& val : i)
        {
            cout << val << " ";
        }
        cout << endl;
    }
}