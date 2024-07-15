#include <iostream>
#include <math.h>

int main(){
    int num = 5;
    int tempNum = num;
    int reverseNum = 0;
    int lastDigit = 0;

    do
    {
        lastDigit = num % 10;
        num = num / 10;
        reverseNum = (reverseNum*10) + lastDigit;
    } while (num > 0);

    if (reverseNum == tempNum)
    {
        std::cout << "Palindrome Number" << std::endl;
    } else 
        {
        std::cout << "Not a Palindrome Number" << std::endl;
    }
    
    
}