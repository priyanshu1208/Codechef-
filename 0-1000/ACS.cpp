#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int p;
        cin >> p;
        if (p <= 10)
            cout << p << endl;
        else if (p % 100 >= 10)
            cout << -1 << endl;
        else
            cout << p / 100 + p % 100 << endl;
    }
    return 0;
}