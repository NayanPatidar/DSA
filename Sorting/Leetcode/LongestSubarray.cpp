#include <iostream>
#include <vector>
using namespace std;

int main(){
    int vec[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int size = sizeof(vec)/sizeof(vec[0]);
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j <= size; j++)
        {
            for (int k = i; k < j; k++)
            {
            cout << vec[k] << " ";
            }
            cout << endl;
        }        
    }
    

    return 0;
}