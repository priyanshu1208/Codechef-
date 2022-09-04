#include<bits/stdc++.h>
#include <boost/math/common_factor.hpp>

using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long  a,b;
        cin>>a>>b;
        cout<<__gcd(a, b)  << " "<< ((a*b)/__gcd(a,b))<<endl;
    }
    
    return 0;
}