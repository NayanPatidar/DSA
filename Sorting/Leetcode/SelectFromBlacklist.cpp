#include <iostream>
#include <vector>
#include <map>
#include <cstdlib>
#include <ctime>
#include <random>
#include <algorithm>

using namespace std;

class Solution {
    public:
    vector<int>& blacklistElem;
    std::random_device rd;   // Non-deterministic seed generator
    std::mt19937 gen;  // Mersenne Twister engine
    std::uniform_int_distribution<> distrib;

    int num;
    
        Solution(int n, std::vector<int>& blacklist)
        : blacklistElem(blacklist), num(n), gen(std::random_device{}()), distrib(0, n - 1) {}
    
    int pick() {     
        int randomNumber; 
        do{
        randomNumber = distrib(gen);
        } while (true == CheckPresence(randomNumber));
        return randomNumber;
    }

    bool CheckPresence(int randomNumber){
        return find(blacklistElem.begin(), blacklistElem.end(), randomNumber) != blacklistElem.end();
    }
};

