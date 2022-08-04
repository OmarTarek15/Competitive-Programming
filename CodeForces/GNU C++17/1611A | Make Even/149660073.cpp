#include<bits/stdc++.h>
#define ll long long
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
 
 
void solve(){
    string n; cin>>n;
    int ans = -1, s = n.size();
    if((n[s-1] - '0') % 2 == 0)
        ans = 0;
    else if((n[0] - '0') % 2 == 0)
        ans = 1;
    else{
        bool c = false;
        int i;
        for(i=0;i<s;++i){
            if((n[i]-'0') % 2 == 0){
                c = true;
                break;
            }
        }
        if(c)
            ans = 2;
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