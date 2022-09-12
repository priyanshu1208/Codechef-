#include <iostream>

using namespace std;
int main()
{
    while (true)
    {
        int n;
        cin >> n;
        if (n == 0)
        {
            break;
        }

        int count = 0, arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 1; i <= n; i++)
        {
            if (arr[arr[i - 1] - 1] != i)
            {
                count = 1;
            }
        }
        cout << ((count) ? "not ambiguous" : "ambiguous");
        cout << endl;
    }
    return 0;
}