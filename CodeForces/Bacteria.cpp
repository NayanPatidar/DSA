#include <iostream>
using namespace std;

int main()
{
    int req = 0;
    cin >> req;

    int count = 0;
    while (req > 0)
    {
        count += (req & 1);
        req >>= 1;
    }

    cout << count << endl;

    return 0;
}