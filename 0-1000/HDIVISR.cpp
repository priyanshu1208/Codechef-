#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int a[11] = {0};
    for (int i = 1; i <= 10; i++)
    {
        if (t % i == 0)
        {
            a[i - 1] = i;
        }
    }
    cout << *max_element(a, a + 10);

    return 0;
}