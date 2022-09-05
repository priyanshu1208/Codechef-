#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, p;
    cin >> t >> p;
    int area = t * p;
    int peri = 2(t + p);
    if (area > peri)
        cout << "Area" << endl<<area;
    else if (area < peri)
        cout << "Peri" << endl<<peri;
    else
        cout << "Eq" << endl<<area;
    return 0;
}