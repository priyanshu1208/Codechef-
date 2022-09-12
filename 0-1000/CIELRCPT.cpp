#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int answer=0;
	    int z=0;
	    if(n>2048){
	        z=n/2048;
	        n=n%2048;
	    }
	    while(n>0){
	        if(n&1==1){
	            answer++;
	        }
	        n=n/2;
	    }
	    cout<<answer+z<<endl;
	    }
	
	return 0;
}

