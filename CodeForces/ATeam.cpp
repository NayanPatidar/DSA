#include <iostream>
using namespace std;

int main()
{
    int val = 0;
    cin >> val;

    int ques = 0;
    for (int i = 0; i < val; i++)
    {
        int one, two, three = 0;
        cin >> one >> two >> three;

        if (one + two + three >= 2)
        {
            ques++;
        }
    }

    cout << ques << endl;

    return 0;
}