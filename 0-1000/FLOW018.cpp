#include <bits/stdc++.h>
using namespace std;
int fact(int number)
{
    if (number == 0)
        return 1;
    else
        return number * fact(number - 1);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << fact(n)<<endl;
    }
    return 0;
}