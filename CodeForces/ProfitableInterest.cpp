#include <iostream>
using namespace std;

int main()
{
    int val = 0;
    cin >> val;

    int numOfCoins, minProfit = 0;

    for (int i = 0; i < val; i++)
    {

        cin >> numOfCoins >> minProfit;

        if (numOfCoins * 2 <= minProfit)
        {
            cout << 0 << endl;
        }
        else
        {
            if (numOfCoins >= minProfit)
            {
                cout << numOfCoins << endl;
            }
            else
            {
                int n = minProfit - numOfCoins;
                cout << numOfCoins - n << endl;
            }
        }
    }

    return 0;
}