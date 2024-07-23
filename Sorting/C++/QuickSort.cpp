#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int QuickSortPartition(vector<int> &arr, int low, int high){
    int pivot = arr[low];
    int l = low;
    int r = high;
        while (l < r){
            while (arr[l] <= pivot && l <= high-1)
            {
                l++;
            }
            while (arr[r] > pivot && r >= low+1)
            {
                r--;
            }
            if (l < r) swap(arr[l], arr[r]);  
        }
    swap(arr[low], arr[r]);  
    return r;
}

void QuickSort(vector<int> &arr, int low, int high){
    if (low < high)
    {
        int pIndex = QuickSortPartition(arr, low, high);
        QuickSort(arr, low, pIndex-1);
        QuickSort(arr, pIndex+1, high);
    }
}



int main(){
    std::vector<int> arr = {4,2,1,6,7,9,3};
    
    int N = 7;
    QuickSort(arr, 0, N-1);
    
    for (auto i = arr.begin(); i < arr.end(); i++)
    {
        cout << *i << " " ;
    }
    cout << endl;
}