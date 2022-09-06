#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int left = (a * a) / (c * c * c);
        int right = (b * b) / (d * d * d);
        if (left == right)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}