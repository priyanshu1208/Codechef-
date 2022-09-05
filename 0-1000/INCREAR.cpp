#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int x,y, diff;
        cin>>x>>y;
        if(x==y){
            cout<<"0"<<endl;
        }
        else if(x<y){
            diff=y-x;
            cout<<diff<<endl;
        }
       else {
           if(y%2==x%2){
               cout<<(x-y)/2<<endl;
           }
           else{
               cout<<2+(x-y)/2<<endl;
           }
       }
    }
	// your code goes here
	return 0;
}
