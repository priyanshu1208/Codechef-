#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if (pow(b, 2) / pow(d, 3) == pow(a, 2) / pow(c, 3))
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}