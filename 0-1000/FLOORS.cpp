#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        int floor1, floor2;
        if (x < 10)
            floor1 = 1;
        if (y < 10)
            floor2 = 1;

        if (x % 10 == 0)
            floor1 = x / 10;
        else
            floor1 = x / 10 + 1;
        if (y % 10 == 0)
            floor2 = y / 10;
        else
            floor2 = y / 10 + 1;
        cout << abs(floor2 - floor1) << endl;
    }
    return 0;
}