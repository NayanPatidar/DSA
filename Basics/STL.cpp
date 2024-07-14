#include <iostream>
#include <utility>
#include <vector>
using namespace std;

void pairDefine(){
    pair<int, int> p1 = {1,3};
    cout << p1.first << " " << p1.second <<endl;
    pair<int, pair<int, int>> p2 = {1,{ 2, 3 }};
    cout << p2.first << " " << p2.second.first << " " << p2.second.second;
}

void vectorDefine(){
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);
    v.emplace_back(3);
    v.emplace_back(4);
    v.emplace_back(5);

    vector<pair<int, int>> vec;
    vec.push_back({1,2});
    vec.emplace_back(1,2);

    vector<int> v2(5, 100); // {100, 100, 100, 100, 100}
    vector<int> v3(v);

    // To get the values stored in the vector container
    // 1 - Iterator
    // 2 - vec[0]

    vector<int>::iterator it = v3.begin();
    it++;
    // cout << *it << endl;
    it += 2;
    // cout << *it << endl;

    vector<int>::iterator it2 = v3.end();
    it2--;
    // cout << *it2 << endl;

    // for (auto it3 = v.begin(); it3 != v.end() ; it3++)
    // {
    //     cout << *(it3) << endl;
    // }

    // v.erase(v.begin() + 1);
    v.erase(v.begin() + 2, v.begin() + 4);

    for (auto it4 : v)
    {
        cout << it4 << endl;
    }
    
    
}

int main(){
vectorDefine();
}