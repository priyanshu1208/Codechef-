#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, ritik1, sat2;
        cin >> a >> b >> ritik1 >> sat2;
        {
            if (a > b)
                b += ritik1;
            else
                a += ritik1;
        }
        {
            if (a >= b)
                b += sat2;
            else
                a += sat2;
        }
        if (b > a)
            cout << "S" << endl;
        else
            cout << "N" << endl;
    }
    return 0;
}