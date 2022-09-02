#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
       int n[4];
       for (int i = 0; i < 4; i++)
       {
        cin>>n[i];
       }
       
       cout<<*max_element(n,n+4)<<endl;
    }
    return 0;
}