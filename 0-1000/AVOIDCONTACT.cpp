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
        if (a == b)
            cout << a + b - 1 << endl;
        else
            cout << a + b << endl;
    }
    return 0;
}