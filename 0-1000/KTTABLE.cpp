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
        long long a[10000], b[100000];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        int count = 0;

        for (int i = 0; i < n; i++)
        {
            if (i == 0)
            {
                if (a[i] >= b[i])
                    count++;
            }
            else if ((a[i ] - a[i-1]) >= b[i])
            {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}