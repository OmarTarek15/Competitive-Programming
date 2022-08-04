#include<bits/stdc++.h>
#define ll long long
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
 
 
void solve(){
    int n, i, j; cin>>n;
    set<int> s;
    for(i=0;i<n;++i){
        int x; cin>>x;
        s.insert(x);
    }
    int ans(0);
    int a = s.size();
    while(n!=0 && a!=0){
        ans++;
        a--;
        n--;
    }
    cout<<ans<<"\n";
}
 
int main(){
    fast
    int t; cin>>t;
    while(t--){
        solve();
    }
}