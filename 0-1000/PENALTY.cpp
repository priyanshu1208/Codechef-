#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a[11];
        for (int i = 0; i < 10; i++)
            cin >> a[i];

        int team1 = 0, team2 = 0;

        for (int i = 0; i < 10; i = i + 2)
            team2 += a[i];

        for (int i = 1; i < 10; i = i + 2)
            team1 += a[i];

        if (team1 > team2)
            cout << "2" << endl;
        else if (team2 > team1)
            cout << "1" << endl;
        else
            cout << "0" << endl;
    }
    return 0;
}