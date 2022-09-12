#include <iostream>
using namespace std;

int main() {
	int t ;
	cin>>t ;
	while(t--){
	    int n ;
	    cin>>n;
	    int a[n];
	    for(int i=0; i<n; i++){
	        cin>>a[i];
	    }
	    int b[n];
	    for(int i=0; i<n-1; i++){
	        b[i]=a[i]+a[i+1];
	    }
	    b[n-1]=a[0]+a[n-1];
	    int maaxx = 0;
	    for(int i=0; i<n; i++){
	        maaxx = max(maaxx , b[i]);
	    }
	    cout<<maaxx<<endl;
	}
	return 0;
}
