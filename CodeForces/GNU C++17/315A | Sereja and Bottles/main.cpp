#include <bits/stdc++.h>
#define TxtIO freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long

using namespace std;

void solve(){
    int n; cin >> n;
    int a[1000], b[1000], c[1001] = {0};

    for(int i = 0; i < n; ++i){
        cin >> a[i] >> b[i];
        c[b[i]]++;
    }

    int ans(0);
    for(int i = 0; i < n; ++i){
        c[b[i]]--;
        if(c[a[i]] == 0)
            ans++;
        c[b[i]]++;
    }

    cout<<ans;
}

int main() {
    IO
    //TxtIO
    solve();
}
