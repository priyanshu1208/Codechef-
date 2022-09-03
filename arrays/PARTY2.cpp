#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int k;
        cin >> k;
        if (k >= x * n)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}