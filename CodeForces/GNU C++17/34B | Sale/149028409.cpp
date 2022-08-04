#include<bits/stdc++.h>
#define ll long long
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
 
 
void solve(){
    int n, m, i; cin>>n>>m;
    vector<int> v(n);
    for(i=0;i<n;++i)
        cin>>v[i];
    sort(v.begin(), v.end());
    int ans(0);
    for(i=0;i<n;++i)
        if(m!=0 && v[i] < 0){
            ans += v[i];
            m--;
        }
    cout<<abs(ans);
}
 
int main(){
    fast
    //int t; cin>>t;
    //while(t--){
        solve();
    //}
}