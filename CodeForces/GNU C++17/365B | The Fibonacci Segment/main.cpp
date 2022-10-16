#include <bits/stdc++.h>
#define TxtIO freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long

using namespace std;

void solve(){
    ll n; cin >> n;
    ll a[n];

    for(int i = 0; i < n; ++i)
        cin >> a[i];

    if(n <= 2){
        cout<<n;
        return;
    }

    ll i(0), ans(0), cnt(2);
    while(i <= n-2){
        if(a[i]+a[i+1] == a[i+2]){
            cnt++;
            i++;
        }else{
            ans = max(ans, cnt);
            cnt = 2;
            i++;
        }
    }

    ans = max(ans, cnt);
    cout<<ans;
}

int main() {
    IO
    //TxtIO
    solve();
}
