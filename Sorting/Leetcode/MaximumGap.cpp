#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int maximumGap(vector<int>& nums) {
    if (nums.size() < 2)
    {
            cout << "FIrst" << endl;
        return 0;
    }
    cout << "Sec" << endl;

    sort(nums.begin(), nums.end());
    int maxGap = 0;
    for (int i = 0; i <= nums.size()-2; i++)
    {
        if (nums[i+1] - nums[i] > maxGap)
        {
            maxGap = nums[i+1] - nums[i];
        }
    }
    cout << maxGap << endl;
    return maxGap;
}

int main(){
    vector<int> vec = { 1,10000000};
    cout << maximumGap(vec) << endl;
}