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
        if (n >= 7)
            cout << "yes\n";
        else if (n % 2 == 0)
            cout << "yes\n";
        else
            cout << "no\n";
    }
    return 0;
}
