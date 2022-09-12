#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        long long res = 0;
        while (n > 0)
        {
            res = res + n / 5;
            n = n / 5;
        }
        cout << res << endl;
    }
    return 0;
}
