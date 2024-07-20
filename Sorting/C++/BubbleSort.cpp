#include <iostream>
#include <algorithm>
using namespace std;

int main(){    
    int arr[6] = {13,46,24,52,20,9};
    int arrSize = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < arrSize; i++)
    {
        for (int j = 0 ; j < arrSize-1-i; j++)
        {
            if (arr[j]  > arr[j+1])
            {
                swap(arr[j], arr[j+1]);           
            } 
        }
        for (int z = 0; z < arrSize; z++)
        {
            cout << arr[z] << " " ;
        }
        cout << endl;
    }
}