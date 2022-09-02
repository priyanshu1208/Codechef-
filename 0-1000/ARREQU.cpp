#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, frequency = 0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        unordered_map<int, int> H;
        for (int i = 0; i < n; i++)
        {
            H[a[i]]++;
        }
        for (int j = 0; j < n; j++)
        {
            if (frequency < H[a[j]])
            {
                frequency = H[a[j]];
            }
        }
        if (((n + 1) / 2) < frequency)
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
    }
    return 0;
}