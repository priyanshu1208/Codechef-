#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x1, x2, x3, v1, v2;
        cin >> x1 >> x2 >> x3 >> v1 >> v2;
        if ((abs(x3 - x1) / v1) > (abs(x3 - x2) / v2))
            cout << "Chef" << endl;
        else if ((abs(x3 - x1) / v1) == (abs(x3 - x2) / v2))
            cout << "Draw" << endl;
        else
            cout << "Kefa" << endl;
    }
    return 0;
}