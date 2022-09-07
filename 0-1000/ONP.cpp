#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;

#define fori(end) for (int i = 0; i < end; i++)
#define forin(start, end) for (start; start < end; start++)

string y = "YES", n = "NO", nl = "\n";

void solve()
{

    string arr;
    string ans;
    string symbols;
    int temp = 0, pointer = 0;

    cin >> arr;
    fori(arr.size())
    {
        if (arr[i] >= 'a' && arr[i] <= 'z')
        {
            ans.push_back(arr[i]);
        }
        if (arr[i] == '(')
        {
        }
        if (arr[i] == ')')
        {
            ans.push_back(symbols[--pointer]);
            temp = 0;
        }
        if (arr[i] == '+' || arr[i] == '-' || arr[i] == '*' || arr[i] == '/' || arr[i] == '^' || arr[i] == '%')
        {
            symbols[pointer] = arr[i];
            pointer++;
        }
    }

    for (int i = pointer - 1; i >= 0; i--)
        ans.push_back(symbols[i]);

    cout << ans << nl;
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {

        solve();
    }

    return 0;
}
