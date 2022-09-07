#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int count = 0;
        for (int i = 0; s[i] != '\0'; i++)
        {
            if (i % 2 == 0)
            {
                if (s[i] == s[i + 1])
                {
                    count++;
                }
            }
        }
        if (count > 0)
            cout << "no" << endl;
        else
            cout << "yes" << endl;
    }
    return 0;
}