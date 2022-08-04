#include <bits/stdc++.h>
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
 
using namespace std;
 
void solve(){
    ll n, m; cin>> n >> m;
 
    ll max;
    if(n > m)
        max = n;
    else
        max = m;
 
    if(n == 1 && m == 1){
        cout<<2;
        return;
    }
 
    int cnt(0);
    for(ll i = 0; i < max; ++i){
        for(ll j = 0; j < max; j++){
            if((pow(i, 2) + j == n) && (pow(j,2) + i) == m)
                cnt++;
        }
    }
 
    cout<<cnt;
}
 
int main() {
    IO
    solve();
}