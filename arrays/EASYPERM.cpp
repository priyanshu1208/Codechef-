#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int p;
        cin >> p;
        if (p >= 2 && p <= 1000)
            for (int j = p; j >= 1; j--)
            {
                cout << j << " ";
            }
        cout << endl;
    }
    return 0;
}