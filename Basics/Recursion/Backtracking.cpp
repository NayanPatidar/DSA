#include <iostream>
using namespace std;
void BackT(int n , int N){
    if (n > N)
    {
        return;
    }
    BackT(n+1, N);
    cout << n << " " ;
    
}

int main(){
    BackT(1, 10);
    return 0;
}