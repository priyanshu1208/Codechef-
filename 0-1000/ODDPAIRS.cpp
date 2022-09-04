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
        long long pair = 0, even_number = 0, odd_number = 0;

        if (n % 2 == 0)
        {
            even_number = n / 2;
            odd_number = n / 2;
        }
        else
        {
            even_number = n / 2;
            odd_number = (n + 1) / 2;
        }
        pair = even_number * odd_number;
        if (n <= 1)
            cout << 0 << endl;
        else
            cout << pair * 2 << endl;
    }
    return 0;
}