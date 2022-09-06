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
        string a, b;
        cin >> a;
        cin >> b;
        int count1 = 0, count2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == '1')
            {
                count1++;
            }

            if (b[i] == '1')
            {
                count1++;
            }
        }
        if (abs(count2 - count1) & 1)
            cout << "0" << endl;
        else
            cout << "1" << endl;
    }
    return 0;
}