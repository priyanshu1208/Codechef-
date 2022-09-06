#include <iostream>
#include <map>
using namespace std;
map<long long, long long> dp;
long long f(long long n)
{
    if (n < 12)
    {
        return (dp[n] = n);
    }
    if (dp[n])
        return dp[n];
    return (dp[n] = max(n, f(n / 2) + f(n / 3) + f(n / 4)));
}
int main()
{
    long long n;
  
    while (cin>>n)
    {
        cout << max(n, f(n)) << endl;
    }
    return 0;
}