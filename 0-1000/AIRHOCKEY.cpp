#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        if (7 - a < 7 - b)
            cout << 7 - a << endl;
        else
            cout << 7 - b << endl;
    }
    return 0;
}