#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int a = 0;
    int b = 0;
    vector<int> dup; 
    
    while (a <= m-1 && b <= n-1)
    {
        if (nums1[a] <= nums2[b] && a <= m-1)
        {
            dup.push_back(nums1[a]);
      //      cout << nums1[a] << "-" << a << " ";
            a++;
        } else {
            dup.push_back(nums2[b]);
      //      cout << nums2[b] << "-" << b << " ";
            b++;
        }
    }

    while ( a <= m-1)
    {
      //  cout << nums1[a] << " ";
        dup.push_back(nums1[a]);
        a++;
    }

    while ( b <= n-1)
    {
      //  cout << nums2[b] << " ";
        dup.push_back(nums2[b]);
        b++;
    }
    
    for (int i = 0; i < m+n; i++)
    {
        nums1[i] = dup[i];
        cout << nums1[i] << " " ;
    }
    cout << endl;
    
    for (int i = 0; i < m+n; i++)
    {
        cout << nums1[i] << " " ;
    }
    

    // for (auto i = dup.begin(); i != dup.end(); i++)
    // {
    //     cout << *i << endl;
    // }
    
    
}

int main(){
    std::vector<int> arr1 = {1,2,3,0,0,0};
    int m = 3;
    std::vector<int> arr2 = {2,5,6};
    int n = 3;
    merge(arr1, m, arr2, n);    
}