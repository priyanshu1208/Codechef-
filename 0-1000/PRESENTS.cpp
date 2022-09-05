#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        if (n <= 4)
            cout << n << endl;
        else if (n % 5 == 0)
            cout << 4 * (n / 5) << endl;
        else
            cout << 4 * (n / 5) + (n % 5) << endl;
    }
    return 0;
}