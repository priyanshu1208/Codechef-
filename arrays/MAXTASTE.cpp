#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int p, q;
        p = max(a, b);
        q = max(c, d);
        cout << p + q << endl;
    }
    return 0;
}