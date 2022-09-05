#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int p, q;
        cin >> p >> q;
        int price = p * q;
        if (p > 1000)
            cout  <<setprecision(7)<< price - 0.1 * price << endl;
        else
            cout  <<setprecision(7)<< price << endl;
    }
    return 0;
}