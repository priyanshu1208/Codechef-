#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a1, a2;
        cin >> a1 >> a2;
        int b1, b2;
        cin >> b1 >> b2;
        int c1, c2;
        cin >> c1 >> c2;
        cout << max(a1 + a2, max(b1 + b2, c1 + c2)) << endl;
    }
    return 0;
}