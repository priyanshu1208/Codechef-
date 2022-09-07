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
        int count = 0;
        int frame[1000000];
        for (int i = 0; i < n; i++)
            cin >> frame[i];
        if (n == 1)
        {
            cout << 1 << endl;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (frame[i] != frame[i + 1])
                {
                    count++;
                }
            }
            cout << count << endl;
        }
    }
    return 0;
}