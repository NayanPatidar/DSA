#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs) {
    vector<vector<string>> vec;
    map<string, int> myMap; 
    vector<string> sortedVec;
    for (const string& val : strs)
    {
        string str = val;
        sort(str.begin(), str.end());
        myMap[str]++;
        sortedVec.push_back(str);
    }

    for (const auto& pair : myMap){
        
        for (int  i = 0; i < sortedVec.size(); i++){
            vector<string> elem;
            if (pair.first == sortedVec[i])
            {
                cout << pair.first << " - " << strs[i]  << "  ";
                elem.push_back(strs[i]);
            }
            vec.push_back(elem);
        }
        cout << endl;
    }
    return vec;
}

int main(){
    vector<string> strs = {"eat","tea","tan","ate","nat","bat"};
    vector<vector<string>> result = groupAnagrams(strs);    
}