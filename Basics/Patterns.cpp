#include <iostream>
using namespace std;

void PatternOne(int n) {
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    
}

void PatternTwo(int n) {
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }  
}

void PatternThree(int n) {
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << j+1 << " ";
        }
        cout << endl;
    }  
}

void PatternFour(int n) {
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << i+1 << " ";
        }
        cout << endl;
    }  
}

void PatternFive(int n) {
    for (int i = 0; i < 5; i++)
    {
        for (int j = 5; j > i; j--)
        {
            cout << "* ";
        }
        cout << endl;
    }  
}

void PatternSix(int n) {
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5-i; j++)
        {
            cout << j+1 << " ";
        }
        cout << endl;
    }  
}

void PatternSeven(int n) {
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5-i; j++)
        {
            cout << "  ";
        }

        for (int k = 0; k < 1+i*2; k++)
        {
           cout << "* ";
        }

        for (int j = 0; j < 5-i; j++)
        {
            cout << "  ";
        }
        cout << endl;
    }  
}

void PatternEight(int n) {
    for(int i = 0; i < 5; i++){
        for(int j = 0 ; j < i ; j++){
            cout << "  ";
        }
        for(int k = 0 ; k < 2*5-1-2*i ; k++){
            cout << "* ";
        }
        for(int j = 0 ; j < i ; j++){
            cout << "  ";
        }
        cout << endl;
    }
}

void PatternNine(int n) {

    for(int i = 0; i < n; i++){
        if (i < n/2)
        {
        for(int j = 0 ; j < n/2-i ; j++){
            cout << "  ";
        }
        for(int k = 0 ; k < 2*i+1 ; k++){
            cout << "* ";
        }
        for(int j = 0 ; j < n/2-i ; j++){
            cout << "  ";
        }
        cout << endl;
        } else
        {
            for(int j = 0 ; j < i-n/2+1 ; j++){
                cout << "  ";
            }
            for(int k = 0 ; k < 2*n-1-2*i ; k++){
                cout << "* ";
            }
            for(int j = 0 ; j < i-n/2+1 ; j++){
                cout << "  ";
            }
            cout << endl;
        }  
    }
}

void PatternTen(int n) {
    for (int i = 1; i <= 2*n-1; i++)
    {
        int stars = i;
        if (i > n) { stars = 2*n-i; }

        for ( int j = 0; j < stars; j++)
        {
            cout << j << " ";
        }
        cout << endl;    
    }
}

void PatternEleven(int n) {
    int stars;
    for (int i = 0; i <= n; i++)
    {
        stars = (i%2 == 0) ? 1 : 0;

        for (int j = 0; j <= i; j++)
        {
            cout << stars << " ";
            stars = 1 - stars;
        }
        cout << endl;    
    }
}

void PatternTwelve(int n ) {
    for (int i = 1; i <= n; i++)
    {
        for (int j= 1; j <= i; j++)
        {
            cout << j << " ";
        }

        for (int j = 0; j < 2*n - 2*i; j++)
        {
            cout << "  ";
        }

        for (int j = i; j > 0; j--)
        {
            cout << j << " ";
        }
        cout << endl;
        
    }
    
}

void PatternThirteen(int n) {
    int num = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << num  << " " ;
            num++;
        }
            cout << endl;
        
    }
    
}

void PatternFourteen(int n) {
    for (int i = 0; i < n; i++)
    {
        for (char j = 'A'; j < 'A' + i; j++)
        {
            cout << j << " ";
        }
        cout << endl;   
    }
}

void PatternFifteen(int n) {
    for (int i = 0; i < n; i++)
    {
        for (char j = 'A'; j < 'A'+n-i ; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    } 
}

void PatternSixteen(int n){
    for (char i = 'A'; i < 'A'+n; i++)
    {
        for (int j = 'A'; j <= i ; j++)
        {
            cout << i << " ";
        }   
        cout << endl;
    }
}

void PatternSeventeen(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n-i; j++)
        {
            cout << "  ";
        }

        char ch = 'A';
        for (int k = 0; k < 1+i*2; k++)
        {
           cout << ch << " ";
           if (k < (2*i+1)/2 )
           {
                ch++;
           }else{
           ch--;
           }
        }

        for (int j = 1; j < n-i; j++)
        {
            cout << "  ";
        }
        cout << endl;
    }  
}

void PatternEighteen(int n){
    char ch = 'E';
    for (int i = 0; i < n; i++)
    {
        for ( char j = ch; j <= ch+i ; j++)
        {
            cout << j << ' ';
        }
        ch--;
        cout << endl;
    }
}

void PatternNineteen(int n){
    for (int i = 0; i < n; i++)
    {
        for ( char j = 0; j < n-i ; j++)
        {
            cout << "* ";
        }
        for ( char j = 0; j < i*2 ; j++)
        {
            cout << "  ";
        }
        for ( char j = 0; j < n-i ; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        for ( char j = 0; j <= i ; j++)
        {
            cout << "* ";
        }
        for ( char j = 0; j < 2*(n-i-1) ; j++)
        {
            cout << "  ";
        }
        for ( char j = 0; j <= i ; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void PatternTwenty(int n){
    int spaces = 2*n-2;
    for (int i = 1; i <= 2*n-1; i++)
    {
        int stars = i;
        if (i > 5)
        {
            stars = 2*n-i;
        }
        
        for (int j = 0; j < stars; j++)
        {
            cout << "* ";
        }

        for (int j = 1; j <= spaces; j++)
        {
            cout << "  ";
        }        
        
        for (int i = 0; i < stars; i++)
        {
            cout << "* ";
        }

        if (i<n) spaces = spaces - 2;
        else spaces = spaces + 2;

        cout << endl;

    }
}

void PatternTwentyOne(int n){
    int spaces = 0;
    for (int i = 0; i < 2*n; i++)
    {
        int stars = i == 0 || i == 2*n-1 ? n : 1 ;
        spaces = i == 0 || i == 2*n-1 ? 0 : 2*n-2 ;
        for (int j = 0; j < stars; j++)
        {
            cout << "* ";
        }
        for (int j = 0; j < spaces; j++)
        {
          cout << "  ";   
        }
        for (int j = 0; j < stars; j++)
        {
            cout << "* ";
        }
        
        cout << endl;
    }
    
}

void PatternTwentyTwo(int n){
    int leftLoop = 0;
    int middleLoop = 0;
    for (int i = 0; i < 2*n-1; i++)
    {
        if (i < n) {
            leftLoop = i;
            middleLoop = 2*n-3-2*i;
        } else {            
            leftLoop = 2*n-2-i ;
            middleLoop = 2*(i-n)+1;
        }
        for (int j = 0; j <= leftLoop; j++)
        {
            if (n-j == 1)
            {
                break;
            }
            cout << n-j << " " ;
        }
        for (int j = 0; j < middleLoop; j++)
        {
            cout << n-leftLoop << " " ;
        }
        for (int j = n-leftLoop; j <= n; j++)
        {
            cout << j << " " ;
        }
        cout << endl;
    }
}
int main(){
    PatternTwentyTwo(9);
    return 0;
}