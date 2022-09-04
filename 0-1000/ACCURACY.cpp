#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        int p, q;
        if (x % 3 == 0)
            cout << 0 << endl;
        else
        {
            p = x / 3 + 1;
            q = p * 3 - x;
            cout << q << endl;
        }
    }
    return 0;
}