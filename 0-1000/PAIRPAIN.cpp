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
        long long int a[10000];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int count = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; i < j; j++)
            {
                if (a[i] * a[j] <= a[i] + a[j])
                    count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}