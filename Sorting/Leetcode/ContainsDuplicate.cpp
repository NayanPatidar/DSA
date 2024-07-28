#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

bool containsNearbyAlmostDuplicate(vector<int>& nums, int indexDiff, int valueDiff) {
    vector<vector<int>> pairs;
    vector<int> dup = nums;
    sort(dup.begin(), dup.end());
    int size = dup.size();
    bool indexDiffPresence = false;

    for (int i = 0; i < size-1; i++)
    {
        int l = i;
        int r = size-1;
        while (l < r)
        {
            int tempValDiff = abs(dup[l] - dup[r]);
            if (tempValDiff < valueDiff)
            {
                l++;
            } else if(tempValDiff > valueDiff){
                r--;
            } else if(tempValDiff == valueDiff){
                auto it = find(nums.begin(), nums.end(), dup[l]);
                int index1 = distance(nums.begin(), it);
                auto it2 = std::find(nums.rbegin(), nums.rend(), dup[r]);
                int index2 = distance(it2, nums.rend()) - 1;
                cout << "index1 : " << index1 << " index2 : " << index2 << endl;
                if(abs(index2 - index1) <= indexDiff){
                    vector<int> gotPair = {l, r};
                    pairs.push_back(gotPair);
                }
                while (l < r && dup[l] == dup[l+1])
                {
                    l++;
                }
                while (l < r && dup[r] == dup[r-1])
                {
                    r--;
                }
                l++;
                r--;
            }
        }  
    }

    if (pairs.size() == 0) return 0;
    return 1;
}

int main(){
    // vector<int> vec = {1,2,3,1};
    vector<int> vec = {1,5,9,1,5,9};
    // 1,5,9,1,5,9
    containsNearbyAlmostDuplicate(vec, 2, 3);
}