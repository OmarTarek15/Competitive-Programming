#include <bits/stdc++.h>
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
using namespace std;
 
void solve(){
    int n, m; cin>> n;
    m = n;
    vector<int> v;
 
    while(m--){
        int a; cin>> a;
        v.push_back(a);
    }
 
    int sum(0), ans(0);
    for(int i: v)
        sum+=i;
 
    for(int i = 1; i <=5; ++i)
        if((sum+i) % (n+1) != 1)
            ans++;
 
    cout<<ans;
}
 
int main() {
    IO
    solve();
}