#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int t;
    cin >> t;
    for (long long i = 0; i < t; i++)
    {
        long long n;
        cin >> n;
        vector<long long> v(n);
        for (long long i = 0; i < n; i++)
        {
            cin >> arr[i];
            s.insert(v[i]);
        }
        if (sz(s) % 2 == 0)
        {
            cout << "YES" << endl;
            return;
        }
        if ((sz(s) == n) && (sz(s) & 1))
        {
            cout << "NO" << endl;
            return;
        }

        cout << "YES" << endl;
    }
}