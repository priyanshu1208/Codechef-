#include<bits/stdc++.h>
using namespace std;
int main()
{
// int t;
// cin>>t;
// while(t--)
// {
    int n;
    cin>>n;
    int a[100];
    int r;
    for(int i=0;i<3;i++)
    {
        r=n%10;
        n=n/10;
        a[i]=r;
    }
    for (int i = 0; i < 3; i++)
    {
        cout<<a[i];
    }
    
// }
    return 0;
}