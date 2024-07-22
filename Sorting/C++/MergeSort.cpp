#include <iostream>
#include <vector>
using namespace std;

void MergeSort(vector<int> &arr, int low, int mid,int high){
    int leftArrPointer = low;
    int rightArrPointer  = mid+1;
    std::vector<int> tempArr;

    while (leftArrPointer <= mid && rightArrPointer <= high)
    {
        if (arr[leftArrPointer] <= arr[rightArrPointer])
        {
            tempArr.push_back(arr[leftArrPointer]);
            leftArrPointer++;
        }  else {
            tempArr.push_back(arr[rightArrPointer]);
            rightArrPointer++;  
        }
    }

    while (leftArrPointer <= mid){
        tempArr.push_back(arr[leftArrPointer]);
        leftArrPointer++;
    }

    while (rightArrPointer <= high){
        tempArr.push_back(arr[rightArrPointer]);
        rightArrPointer++;
    }
}

void DivideSort(vector<int> &arr, int low, int high){       

    if ((low == high)) return;
        int mid = (low+high)/2;
        DivideSort(arr, low, mid);
        DivideSort(arr, mid+1, high);      
        MergeSort(arr, low, mid, high);
}

int main(){ 
    //  arr[7] = {4,2,1,6,7,9,3};
    std::vector<int> arr = {4,2,1,6,7,9,3};
    
    int N = 7;
    DivideSort(arr, 0, N-1);
    
    for (auto i = arr.begin(); i < arr.end(); i++)
    {
        cout << *i << " " ;
    }
}