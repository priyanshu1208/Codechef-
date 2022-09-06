#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int rating;
    cin >> rating;
    while (t--)
    {
        int a;
        cin >> a;
        if (a < rating)
            cout << "Bad Boi" << endl;
        else
            cout << "Good Boi" << endl;
    }
    return 0;
}