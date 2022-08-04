#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main(){
    int n, m, cnt(0); cin>>n>>m;
    map<string, int> mp;
    for(int i = 1; i <= n; ++i){
        string s; cin>>s;
        mp[s] = 1;
    }
    for(int i = 1; i <= m; ++i){
        string l; cin>>l;
        if(mp[l])
            cnt++;
    }
    if(cnt & 1){
        n -= cnt;
        m -= cnt;
        n++;
    }else{
        n -= cnt;
        m -= cnt;
    }
    if(n > m)
        cout<<"YES";
    else
        cout<<"NO";
}