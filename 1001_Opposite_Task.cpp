#include <iostream>
using namespace std;

int main()
{
    int T, n, i;
    cin >> T;
    for (i = 1; i <= T; i++)
    {
        cin >> n;
        if (n > 10)
        {
            cout << 10 << " " << n - 10 << endl;
        }
        else
        {
            cout << 0 << " " << n << endl;
        }
    }

    return 0;
}