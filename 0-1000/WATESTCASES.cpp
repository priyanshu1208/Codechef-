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
        int a[1000];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        string v;
        cin >> v;
        for (int i = 0; i < n; i++)
        {
            if (v[i] == '1')
                a[i] = 101;
        }
        cout << *min_element(a, a + n) << endl;
    }
    return 0;
}