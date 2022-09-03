#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        double cma, cmi;

        cma = sqrt((b * b) + ((a) * (a)));
        cmi = sqrt((b * b) - ((a) * (a)));
        cout << cmi << " " << cma << endl;
    }
    return 0;
}