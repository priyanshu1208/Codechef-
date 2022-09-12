#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, lshoes, x;
        cin >> n >> lshoes >> x;
        int rshoes = n - lshoes;
        int pair;
        if (rshoes > lshoes)
            pair = lshoes;
        else
            pair = rshoes;
        cout << pair * x << endl;
    }
    return 0;
}