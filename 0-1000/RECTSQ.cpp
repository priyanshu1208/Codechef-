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

        int area = n * m;
        int c = __gcd(n, m);
        cout << (n * m) / (c * c) << endl;
    }
    return 0;
}
