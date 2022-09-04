// Team of Two
#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        vector<int> a(n, 0);
        for (int i = 0; i < n; i++)
        {
            int k;
            cin >> k;
            while (k--)
            {
                int x;
                cin >> x;
                a[i] |= (1 << (x - 1));
            }
        }
        bool prince = false;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if ((a[i] | a[j]) == 31)
                {
                    prince = true;
                    break;
                }
            }
        }
        if (prince)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}