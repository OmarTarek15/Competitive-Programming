#include<bits/stdc++.h>
#define ll long long
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
 
 
void solve(){
   int n, m; cin>>n>>m;
   map<string, string> mp;
   while(m--){
       string a, b; cin>>a>>b;
       mp.insert(pair<string, string>(a, b));
   }
    while(n--){
        string c;
        cin>>c;
        auto it = mp.find(c);
        if((it->first).size() <= (it->second).size())
            cout<<it->first<<" ";
        else
            cout<<it->second<<" ";
    }
}
 
int main(){
    fast
    //int t; cin>>t;
    //while(t--){
        solve();
    //}
}