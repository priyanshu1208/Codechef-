#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        if ((500 - (x * 2) + 1000 - ((x + y) * 4)) > (1000 - (y * 4) + 500 - ((x + y) * 2)))
        {
            cout << 500 - (x * 2) + 1000 - ((x + y) * 4) << endl;
        }
        else
            cout << 1000 - (y * 4) + 500 - ((x + y) * 2) << endl;
    }

    return 0;
}