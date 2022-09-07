#include <iostream>
using namespace std;

int main()
{
    int x;
    int n;
    int z = 4;
    int count;
    cin >> x;
    while (x--)
    {
        cin >> n;
        if (n % 2 == 0)
        {
            cout << ((((n * n) / 2) - n) / 4) << "\n";
        }
        else
        {
            cout << (((((n - 1) * (n - 1)) / 2) - (n - 1)) / 4) << "\n";
        }
    }
}
