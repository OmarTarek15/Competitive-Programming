#include<bits/stdc++.h>
#define ll long long
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
 
 
void solve(){
    string s, ans; cin>>s;
    int i;
    int cnt(0);
    for(i=0;i<s.size();++i){
        if(s[i] == '.'){
            if(i==0 || s[i-1] == '.' || i==s.size()-1)
                ans += '0';
            else if(cnt != 0){
                ans += '0';
                cnt = 0;
            }
        }else if(s[i] == '-'){
            if(s[i+1] == '.'){
                ans += '1';
                ++i;
                cnt++;
            }
            else{
                ans += '2';
                ++i;
                cnt++;
            }
 
        }
    }
    cout<<ans;
}
 
int main(){
    fast
    solve();
}