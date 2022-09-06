#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d, e;
        cin >> a >> b >> c >> d >> e;
        int total_distance = a * b;
        if (total_distance < 10)
            cout << 0 << endl;
        else if (total_distance >= 10 && total_distance < 21)
            cout << c << endl;
        else if (total_distance >= 21 && total_distance < 42)
            cout << d << endl;
        else
            cout << e << endl;
    }
    return 0;
}