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
        string p;
        cin >> p;
        for (int i = 0; i < n; i++)
        {
            if (p[i] == 'A')
                p[i] = 'T';
            else if (p[i] == 'T')
                p[i] = 'A';
            else if (p[i] == 'C')
                p[i] = 'G';
            else if (p[i] == 'G')
                p[i] = 'C';
        }
        cout<<p<<endl;
    }
    return 0;
}