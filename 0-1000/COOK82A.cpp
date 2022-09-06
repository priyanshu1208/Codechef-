#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        map<string, int> M;

        for (int i = 1; i <= 4; i++)
        {
            string S;
            cin >> S;
            int goals;
            cin >> goals;
            M[S] = goals;
        }

        bool flag = true;
        if ((M["RealMadrid"] < M["Malaga"]) && (M["Barcelona"] > M["Eibar"]))
        {
            flag = false;
        }

        if (flag)
            cout << "RealMadrid" << endl;
        else
            cout << "Barcelona" << endl;
    }

    return 0;
}
