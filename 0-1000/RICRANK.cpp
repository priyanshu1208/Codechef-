#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int x, y, z;
        cin >> x >> y >> z;
        int p = 0, q = 0;
        if (a > x)
            p++;
        else
            q++;
        if (b > y)
            p++;
        else
            q++;
        if (c > z)
            p++;
        else
            q++;

        if (p > q)
            cout << "A" << endl;
        else
            cout << "B" << endl;
    }
    return 0;
}