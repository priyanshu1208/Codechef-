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
        if (a % c == 0 && b % c == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}