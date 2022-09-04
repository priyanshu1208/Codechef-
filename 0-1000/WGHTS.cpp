#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int w, x, y, z;
        cin >> w >> x >> y >> z;
        if (w == z || w == x || w == y || w == z || (x + y) == w || (x + z) == w || (y + z) == w || (x + y + z) == w)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}