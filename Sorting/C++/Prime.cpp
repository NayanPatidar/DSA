#include <iostream>
using namespace std;

// Prime Number is a number divisible by 1 and itself. 
// A and B are two number such that A is always prime, find B such that B is also prime and consecutive
int main() {
    int A, B;
    cin >> A >> B;

    // Check if B is prime
    for(int i = 0 ; i < B; i++){
        if(B % 1 == 0 && B % B == 1){
            cout<<"True"
        }
    }
}