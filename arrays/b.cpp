#include <bits/stdc++.h>
#define int long long
using namespace std;
int p, a[200001], s;
int solution()
{
     cin >> p;
    s = 0;
     for (int i = 1; i <= p; ++i) cin >> a[i];
     for (int i = p; i > 1; --i)
 if (a[i] > 0)
    {
         a[i - 1] -= a[i] / 2;
         a[i] = a[i] % 2;
         if (a[i] == 1 && (a[i - 1] % 2 == 1 || ((i == 2) && a[1] > 0)))
        {
             a[i] = -1;
            a[i - 1]--;
            
        }
        
    }
     for (int i = 1; i <= p; ++i) s += abs(a[i]);
     cout << s << endl;
}
signed main()
{
     int t;
     cin >> t;
     while (t--) solution();
}