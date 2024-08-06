#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool compareFirstDigits(int a, int b) {
    std::string valOne = std::to_string(a);
    std::string valTwo = std::to_string(b);
    string SumOne = valOne+valTwo;
    string SumTwo = valTwo+valOne;
    cout << SumOne <<  " - " <<  SumTwo << endl;

    return SumOne < SumTwo;
    }

string largestNumber(vector<int>& nums) {
    vector<int> dup = nums;
    string result = "";
    sort(dup.begin(), dup.end(), compareFirstDigits);
    for (auto i = dup.end()-1; i >= dup.begin(); i--)
    {
        cout << *i << endl;
        result = result.append(to_string(*i));
    }
    cout << result << endl;
    return result;
}

int main(){
    vector<int> vec = { 10,2 };
    largestNumber(vec);
}