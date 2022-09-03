#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        if (x < y)
            cout << z << endl;
        else if (x % y == 0)
            cout << (x / y) * z << endl;
        else
            cout << (x / y + 1) * z << endl;
    }
    return 0;
}