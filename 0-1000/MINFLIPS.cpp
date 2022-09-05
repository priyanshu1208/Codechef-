#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int A[1001];
        int pos = 0, neg = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
            if (A[i] == 1)
                pos++;
            else
                neg++;
        }
        if (n % 2 != 0)
            cout << -1 << endl;
        else
        {
            int ans = abs(pos - neg);
            ans = ans / 2;
            cout << ans << endl;
        }
    }
    return 0;
}