#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a[20000];
        cin >> n;

        int option_zero = 0, option_one = 0, result = 0;
        for (int i = 1; i <= n; ++i)
        {
            cin >> a[i];
            option_zero += a[i] == 0;
            option_one += a[i] == 1;
        }
        for (int i = 1; i <= n; ++i)
        {
            if (i == 1)
                result += (a[1] == a[n]);
            else
                result += a[i] == a[i - 1];
        }
        result -= abs(option_zero - option_one);
        if (result % 4 == 0)
            cout << "Bob" << endl;
        else
            cout << "Alice" << endl;
    }
}