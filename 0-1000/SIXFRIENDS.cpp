#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t --)
    {
        int x, y;
        cin >> x >> y;
        if (3 * x > 2 * y)
            cout
                << 2 * y << endl;
        else
            cout << 3 * x << endl;
    }

    return 0;
}