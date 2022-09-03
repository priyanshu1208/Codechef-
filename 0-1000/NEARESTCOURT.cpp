#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        int z = (x + y) / 2;
        if ((x + y) % 2 == 0)
        {
            if (abs(x - z) < abs(y - z))
                cout << abs(x - z) << endl;
            else
                cout << abs(y - z) << endl;
        }
        else 
        {
        if (abs(x - z) < abs(y - z))
            cout << abs(x - z) + 1 << endl;
        else
            cout << abs(y - z) + 1 << endl;
        }
    }
    return 0;
}