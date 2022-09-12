

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[10001];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int sum = 0;
        int finalsum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += a[i];
            if (a[i] > k)
                a[i] = k;
            finalsum += a[i];
        }
        cout << sum - finalsum << endl;
    }
    return 0;
}