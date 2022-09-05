#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        if (a % 4 == 1)
            cout << "East\n";
        else if (a % 4 == 2)
            cout << "South\n";
        else if (a % 4 == 3)
            cout << "West\n";
        else
            cout << "North" << endl;
    }
    return 0;
}