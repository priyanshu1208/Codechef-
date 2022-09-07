#include <iostream>
using namespace std;
long long nCr(int n, int r)
{
    long long res = 1, i;
    if (r > n / 2)
        r = n - r;
    for (i = 1; i <= r; i++)
    {
        res = res * n;
        res = res / i;
        n--;
    }
    return res;
}
int main()
{
    
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        long long ans = nCr(n - 1, n - k);
        cout << ans << endl;
    }
    return 0;
}
