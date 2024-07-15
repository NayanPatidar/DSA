#include <iostream>
#include <math.h>

int main(){
    int num = 15;
    int dup = num;
    int sum =0, lastDigit=0;

    while (num > 0)
    {
        lastDigit = num % 10;
        num = num / 10;
        sum = pow(lastDigit, 3) + sum;
    }

    if (dup == sum)
    {
        std::cout << "Armstrong Number" << std::endl; 
    } else {
        std::cout << "Not an Armstrong Number" << std::endl; 
    }
    
    
}