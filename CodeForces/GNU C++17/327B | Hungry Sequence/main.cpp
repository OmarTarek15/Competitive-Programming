#include <bits/stdc++.h>
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long

using namespace std;

void solve(){
    ll n; cin >> n;
    ll cnt(0);

    for(int i = 1; cnt < n; ++i){
        cout<<n+i<<" ";
        cnt++;
    }
}

int main() {
    IO
    solve();
}
