#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a;
        cin >> a;
        int counta = 0, countb = 0;
        for (int i = 0; a[i] != '\0'; i++)
        {
            if (a[i] == 'a')
                counta++;

            else
                countb++;
        }
        if (counta == 0 || countb == 0)
            cout << 0 << endl;
        else if (counta > countb)
            cout << countb << endl;
        else
            cout << counta << endl;
    }
    return 0;
}