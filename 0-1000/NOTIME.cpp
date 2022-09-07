#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, h, x;
    cin >> n >> h >> x;
    int a[1000];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (x + a[i] >= h)
            count++;
    }
    if (count > 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}