#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        double n;
        cin >> n;
        if (n < 1500)
            cout <<setprecision(8)<< n + 0.10 * n + 0.90 * n << endl;
        else
            cout << setprecision(8)<<n + 500 + 0.98 * n << endl;
    }
    return 0;
}