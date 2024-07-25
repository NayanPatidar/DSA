#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {
    vector<vector<int>> vec;
    std::sort(nums.begin(), nums.end());

    for (auto i = nums.begin(); i != nums.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;
    
    for (int i = 0; i < nums.size()-2; i++)
    {
        if (i > 0 && nums[i] == nums[i-1])
        {
            continue;
        }
        
        int l = i+1;
        int r = nums.size()-1;
        int total;
        while (l < r)
        {
            total = nums[i] + nums[l] + nums[r];
            if (total < 0)
            {
                l++;
            } else if(total > 0){
                r--;
            } else {
                vector<int> array{ nums[i] , nums[l] , nums[r] };
                for (auto i = array.begin() ; i != array.end(); i++)
                {
                    cout << *i << " " ;
                }
                cout << endl;
                vec.push_back(array);
                while( l<r && nums[l] == array[1]){
                    l++;
                }
                while ( l<r && nums[r] == array[2]){
                    r--;
                }
            }
        }
    }
    return vec;
}

int main(){
    vector<int> vec;
    vec.push_back(-1);
    vec.push_back(0);
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(-1);
    vec.push_back(-4);
    vector<vector<int>> finalVec = threeSum(vec);
    cout<< "Here "<< endl;
    for (const auto& innerVec : finalVec)
    {
        for (int num : innerVec)
        {
            cout << num << " ";
        }
        std::cout << endl;
    }
    
}