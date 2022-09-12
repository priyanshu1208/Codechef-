#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        string a;
        for (int i = 0; i < 14; i++)
            cin >> a[i];
        int c = 0, n = 0, d = 0;
        for (int i = 0; i < 14; i++)
        {
            if (a[i] == 'C')
                c++;
            else if (a[i] == 'N')
                n++;
            else if (a[i] == 'D')
                d++;
        }
        int charl = (c * 2) + d;
        int chef = (n * 2) + d;
        if (charl > chef)
            cout << 60 * x << endl;
        else if (chef < charl)
            cout << 40 * x << endl;
        else
            cout << 55 * x << endl;
    }
    return 0;
}