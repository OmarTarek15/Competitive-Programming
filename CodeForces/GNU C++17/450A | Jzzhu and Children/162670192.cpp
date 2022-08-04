#include <bits/stdc++.h>
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
using namespace std;
 
void solve(){
    int n, m, last; cin>> n>> m;
    int max(0);
    double a;
 
    for(int i = 1; i <= n; ++i){
        cin>>a;
        if(ceil(a/m) >= max){
            last = i;
            max = ceil(a/m);
        }
    }
 
    cout<<last;
}
 
int main() {
    IO
    solve();
}