#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int arr[6] = {13,46,24,52,20,9};
    int arrSize = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < 6; i++)
    {
        int smallestNum = arr[i];
        for (int j = i; j < arrSize; j++)
        {
            if(arr[j] < smallestNum){
                swap(arr[i], arr[j]);
            }
        }  
    }
    for (int i = 0; i < arrSize; i++)
    {
        cout << arr[i] << " ";
    }
    
    
}