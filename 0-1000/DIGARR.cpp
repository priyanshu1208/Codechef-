#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t, d;
    string s;
    cin >> t;
    while (t--)
    {
        cin >> d;
        cin >> s;
        int count = 0;
        for (int i = 0; i < d; i++)
        {
            if (s[i] == '5' || s[i] == '0')
            {
                cout << "YES" << endl;
                break;
            }
            else
                count++;
        }
        if (count == d)
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
