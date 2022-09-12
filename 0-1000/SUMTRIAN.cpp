#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n][n];

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                cin >> a[i][j];
            }
        }
        for (int k = n - 2; k >= 0; k--)
        {
            for (int l = 0; l <= k; l++)
            {
                a[k][l] += max(a[k + 1][l], a[k + 1][l + 1]);
            }
        }
        cout << a[0][0] << endl;
    }
    return 0;
}
