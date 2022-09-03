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
        string prince;
        cin >> prince;
        for (int i = 0; i < n; i = i + 2)
        {
            if (prince[i] == '0' && prince[i + 1] == '0')
                cout << "A";
            else if (prince[i] == '1' && prince[i+1] == '0')
                cout << "C";
            else if(prince[i] == '0' && prince[i+1] == '1')
                cout << "T";
                else if (prince[i] == '1' && prince[i+1] == '1')
                cout << "G";
        }
        cout<<endl;
    }
    return 0;
}