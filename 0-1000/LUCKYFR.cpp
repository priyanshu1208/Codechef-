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
        int r, count = 0;
        while (n)
        {
            r = n % 10;
            if (r == 4)
                count++;
            n = n / 10;
        }
        cout << count << endl;
    }
    return 0;
}