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
        if (a == c || b == d)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}