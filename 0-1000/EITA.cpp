#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int d, x, y, z;
        cin >> d >> x >> y >> z;
        if (x * 7 > (y * d + z * (7 - d)))
            cout << x * 7 << endl;
        else
            cout << (y * d + z * (7 - d)) << endl;
    }
    return 0;
}