#include<bits/stdc++.h>
using namespace std;

using ll = long long;
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()

void test_case(){
    int n; cin >> n;
    vector<set<int>> a(n);
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        for(int j = 0; j < x; j++){
            int v; cin >> v;
            a[i].insert(v);
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            bool ok = true;
            for(int k = 1; k <= 5; k++){
                ok &= a[i].count(k) || a[j].count(k);
            }
            if(ok){
                puts("YES");
                return;
            }
        }
    }
    puts("NO");
}

int main(){
  
    int t; cin >> t;
    while(t--){
        test_case();
    }
}