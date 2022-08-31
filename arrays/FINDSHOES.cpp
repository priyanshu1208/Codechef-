#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n, m;
        cin >> n >> m;
        if (m == 0)
            cout << n * 2 << endl;
        else if (n < m)
            cout << n << endl;
        else if (n == m)
            cout << m << endl;
        else
            cout << 2 * n - m << endl;
    }
    return 0;
}