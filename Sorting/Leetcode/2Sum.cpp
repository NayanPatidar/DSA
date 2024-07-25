#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

vector<int> twoSum(std::vector<int>& nums, int target) {
    std::vector<int> nums2 = nums; 
    std::sort(nums2.begin(), nums2.end());
    int l = 0;
    int r = nums.size()-1;
    vector<int> newVec;
    std::map<int , int > myMap;
    auto it = myMap.begin();

    while (l < r )
    {
        cout << "l : " << l << " r : "<< r << endl; 
        int result = nums2[l] + nums2[r];
        if(result < target){
            l++;
        } else if (result > target){
            r--;
        } else {
            cout << nums2[l] << endl;
            auto it1 = std::find(nums.begin(), nums.end(), nums2[l]);
            size_t index1 = std::distance(nums.begin(), it1);
            cout << nums2[r] << endl;
            auto it2 = std::find(nums.rbegin(), nums.rend(), nums2[r]);
            size_t index2 = std::distance(it2, nums.rend()) - 1;

            newVec.push_back(index1);
            newVec.push_back(index2);
            break;
        }
    }
    return newVec;
}

int main(){
    vector<int> nums = { 3,2,3 };
    vector<int> ans = twoSum(nums, 6);
    for (auto i = ans.begin(); i != ans.end(); i++)
    {
        cout << *i << " ";
    }
    
}