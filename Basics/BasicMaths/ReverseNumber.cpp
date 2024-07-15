#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int num = 12345000;
    int lastDigit, reverseNum = 0;

    do
    {
        lastDigit = num % 10;
        num = num / 10;
        reverseNum = (reverseNum*10) + lastDigit;
    } while (num > 0);

    cout << reverseNum << endl;
}