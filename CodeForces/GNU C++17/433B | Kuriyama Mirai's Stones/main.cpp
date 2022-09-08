#include <bits/stdc++.h>
#define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long

using namespace std;

void solve(){
    ll n; cin >> n;
    ll a[100010], b[100010];

    for(int i = 1; i <= n; ++i){
        int x; cin >> x;
        a[i] = b[i] = x;
    }

    sort(a+1, a+n+1);
    for(int i = 1; i <= n; ++i){
        b[i] += b[i-1];
        a[i] += a[i-1];
    }

    int m; cin >> m;
    for(int i = 1; i <= m; ++i){
        int type, l, r; cin >> type >> l >> r;
        if(type == 1)
            cout<<b[r] - b[l-1]<<"\n";
        else
            cout<<a[r] - a[l-1]<<"\n";
    }
}

int main() {
    IO
    //TxtIO
    solve();
}
