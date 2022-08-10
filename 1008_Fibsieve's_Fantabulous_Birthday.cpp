#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    for (int i = 1; i <= T; i++)
    {
        long long s, r, l, row, col;
        cin >> s;
        r = ceil(sqrt(s * 1.0));
        l = r * r - s;
        if (l < r)
        {
            row = r;
            col = l + 1;
        }
        else
        {
            col = r;
            row = s - (r - 1) * (r - 1);
        }
        if (r % 2 == 0)
        {
            long long temp = col;
            col = row;
            row = temp;
        }
        cout << "Case " << i << ":"
             << " " << col << " " << row << endl;
    }

    return 0;
}