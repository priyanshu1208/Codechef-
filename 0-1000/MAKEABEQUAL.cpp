#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, add = 0, maximum = 0;
        cin >> n;
        long long a[n], b[n], pri[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        for(int j=0;j<n;j++)
        {
            pri[j] = a[j] -b[j];
            add = add + pri[j];
            if (pri[j] > 0)
                maximum = maximum + pri[j];
            
        }
        if (add == 0)
            cout << maximum << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}