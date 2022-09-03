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
        int p, q;
        p = a * 10;
        q = b * 5;
        if (p == q)
            cout << "ANY" << endl;
        else if (p > q)
            cout << "FIRST" << endl;
        else
            cout << "SECOND" << endl;
    }
    return 0;
}