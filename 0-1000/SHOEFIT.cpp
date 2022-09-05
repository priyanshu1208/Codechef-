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
        if ((a == 1 && b == 1 && c == 1) || (a == 0 && b == 0 && c == 0))
            cout << 0 << endl;
        else
            cout << 1 << endl;
    }
    return 0;
}