#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int s, x, y, z;
        cin >> s >> x >> y >> z;
        int p = (x + y + z) - s;
        if (p < 0)
            cout << 0 << endl;
        else
            cout << (x + y + z) / s << endl;
    }
    return 0;
}