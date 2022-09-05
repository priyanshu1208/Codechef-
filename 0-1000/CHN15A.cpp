#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int A[101];
        for (int i = 0; i < n; i++)
            cin >> A[i];
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if ((A[i] + k) % 7 == 0)
                count++;
        }
        cout << count << endl;
    }
    return 0;
}