#include <bits/stdc++.h>
#define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
 
using namespace std;
 
void solve(){
    ll n; cin >> n;
 
    vector<ll> v(n);
    for(ll i = 0; i < n; ++i)
        cin>> v[i];
 
    sort(v.begin(), v.end());
 
    ll cnt(0);
    for(ll i = 1, l = 0; i <= n; ++i, ++l)
        cnt += abs(v[l] - i);
 
    cout<<cnt;
}
 
int main() {
    IO
    //TxtIO
    solve();
}
