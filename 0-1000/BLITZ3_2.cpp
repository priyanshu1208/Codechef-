#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int number = 2 * (180 + a);
        cout << b + c - number << endl;
    }
    return 0;
}