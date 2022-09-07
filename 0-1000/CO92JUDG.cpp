#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int max_a = 0, max_b = 0;
        int a[1000], b[1000];
        int sum_a = 0, sum_b = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            max_a = max(max_a, a[i]);
            sum_a += a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            max_b = max(max_b, b[i]);
            sum_b += b[i];
        }
        sum_a -= max_a;
        sum_b -= max_b;

        if (sum_a > sum_b)
            cout << "Bob" << endl;
        else if (sum_b > sum_a)
            cout << "Alice" << endl;
        else
            cout << "Draw" << endl;
    }
    return 0;
}