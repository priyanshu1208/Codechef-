#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int n, c = 0;
    cin >> n;
    while (n > 0)
    {

        int ld = n % 10;
        c++;
        n = n / 10;
    }

    if (c <= 3)
        cout << c << endl;
    else
        cout << "More than 3 digits" << endl;
    return 0;
}
