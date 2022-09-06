#include <iostream>
using namespace std;
  
int main() {
	int t;
	cin>>t;
	int D,N,sum=0;
	for(int x=0; x<t; x++)
	{
	    sum=0;
	    cin>>D>>N;
	    
	    for(int i=0; i<D; i++)
        {
             sum=0;
            for(int j=1; j<=N; j++)
            {
                sum+=j;
            }
            N=sum;
        }
        cout<<sum<<endl;
	}
	
	return 0;
}
