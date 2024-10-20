#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    cin >> n;

    string word = "";
    for (int i = 0; i < n; i++)
    {
        cin >> word;
        int wordLength = word.size();
        if (wordLength > 10)
        {
            cout << word[0] << wordLength - 2 << word[wordLength - 1] << endl;
        }
        else
        {
            cout << word << endl;
        }
    }

    return 0;
}