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
        string A;
        int start = 0, ltime = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> A;
            if (A == "START38")
                start++;
            else if (A == "LTIME108")
                ltime++;
        }
        cout << start << " " << ltime << endl;
    }
    return 0;
}