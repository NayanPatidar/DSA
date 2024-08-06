#include <iostream>
#include <vector>
using namespace std;

void moveZeroes(vector<int>& nums) {
        // int size = nums.size();
        // for(int i = 0 ; i < size ; i++){
        //     if(nums[i] == 0){
        //         for(int j = i+1; j < size; j++){
        //             int temp = nums[j];
        //             nums[j] = 0;
        //             nums[j-1] = temp;
        //         }
        //     }
        // }        

        int left = nums.size()/2;
        int right = nums.size()-1;
        while(nums[right] == 0 ){
            right--;
        }

        if(right == -1){
            cout << " returned" << endl;
            return;
        }

        while(left >= 0){
            if(nums[left] == 0){
                swap(nums[left], nums[right]);
                left--;
                right--;
                while(nums[right] == 0){
                    right--;
                }
            } else if(nums[left] != 0){
                swap(nums[left], nums[right]);
                left--;
            }
        }

        // cout << left << " " << right;
        // while(left != 0){

        // }

        // int index = 0;
        // for(auto vecValues : vec){
        //     nums[index] = vecValues;
        //     index++;
        // }

        // for(int i = vec.size(); i < nums.size(); i++ ){
        //     nums[i] = 0;
        // }
}

int main(){
    vector<int> vec = { 0,0 };
    moveZeroes(vec);
    for (auto i : vec)
    {
        cout << i << " ";
    }
    
}
