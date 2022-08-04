#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
 
void solve(){
    int n, i, j; cin>>n;
    string s; cin>>s;
    bool vis[26] = {0};
    bool sus = true;
    for(i=0;i<s.size();++i){
        if(i==0 || s[i] != s[i-1]){
            if(vis[s[i]-'A']){
                sus = false;
                break;
            }else{
                vis[s[i]-'A'] = true;
            }
        }
    }
    if(sus)
        cout<<"YES\n";
    else
        cout<<"NO\n";
}
 
int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
}