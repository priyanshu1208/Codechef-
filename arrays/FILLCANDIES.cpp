#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,m;
        cin>>n>>k>>m;
        if(k*m==n)
        cout<<1<<endl;
        else 
        {
        if((n-(k*m))%(k*m)==0)
        cout<<2<<endl;
        else 
        cout<<1+ (n-(k*m))/(k*m)<<endl;
        }
    }

    return 0;
}