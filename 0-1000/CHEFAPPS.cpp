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
        int free = s - (x + y);
        int a = z - free;
        if (a <= 0)
            cout << 0 << endl;
        else if (a <= max(x, y))
            cout
                << 1 << endl;
        else
            cout << 2 << endl;
    }
    return 0;
}