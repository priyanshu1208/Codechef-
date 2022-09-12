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
        long long a[1000];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int count = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; i < n; j++)
            {

                if ((__gcd(a[i], a[j])) == ((a[i] * a[j]) / __gcd(a[i], a[j])))
                    count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}