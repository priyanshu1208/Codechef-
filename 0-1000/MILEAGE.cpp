#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        float n, x, y, a, b;
        cin >> n >> x >> y >> a >> b;
        if ((x / a) * n < (y / b) * n)
            cout << "PETROL" << endl;
        else if ((x / a) * n > (y / b) * n)
            cout << "DIESEL" << endl;
        else
            cout << "ANY" << endl;
    }
    return 0;
}