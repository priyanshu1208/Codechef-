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
        set<int> prince;
        bool answer = true;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            prince.insert(x);
        }
        if (prince.size() & 1)
        {
            if (!(n - prince.size()))
                answer = false;
        }
        if (answer)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}