#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int num, dividend, digits;
    cin >> num;

    digits = (int)log10(num)+1;
    cout << digits;
    // do
    // {
    //     num = num / 10;
    //     dividend = num;
    //     digits += 1;
    // } while (dividend > 0);
    // cout << digits << endl;    
}