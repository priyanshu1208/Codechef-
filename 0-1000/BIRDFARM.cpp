#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        if (z % x == 0)
        {
            if (z % y == 0)
                cout << "Any" << endl;
            else
                cout << "Chicken" << endl;
        }
        else if (z % y == 0)
        {
            if (z % x == 0)
                cout << "Any" << endl;
            else
                cout << "Duck" << endl;
        }
        else
            cout << "None" << endl;
    }
    return 0;
}