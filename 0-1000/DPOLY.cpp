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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int k = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (a[i] == 0)
                k++;
            else
                break;
        }
        cout << (n - 1) - k << endl;
    }
    return 0;
}
