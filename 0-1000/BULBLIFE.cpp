#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int a[1000], sum = 0;
        for (int i =0 ; i < n-1; i++)
        {
            cin >> a[i];
            sum = sum + a[i];
        }
        if (n * x - sum > 0)
            cout << (n * x) - sum << endl;
        else
            cout << "0" << endl;
    }
    return 0;
}