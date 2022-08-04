#include<bits/stdc++.h>
#define ll long long
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
 
 
void solve(){
    int n, a, b; cin>>n>>a>>b;
    string s = "abcdefghijklmnopqrstuwvxyz";
    string ans;
    for(int i = 0; i < n; ++i){
        if(b != 0){
            ans += s[i];
            b--;
        }
    }
    for(int i = 0; i < n; ++i)
        if(ans.size() != n)
            ans += ans[i];
    cout<<ans<<"\n";
}
 
 
int main(){
    fast
    int t; cin>>t;
    while(t--){
        solve();
    }
}