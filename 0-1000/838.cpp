#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, m;
        cin >> a >> b >> m;
         cout<<min(abs(b-a),min(m-b+a,m-a+b))<<endl;
        
    }
    return 0;
}
