#include <bits/stdc++.h>
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long

using namespace std;

void solve(){
    int n; cin >> n;
    int l, r, minl, maxr,pos;
    cin>> minl >> maxr;

    for(int i = 2; i <= n; ++i){
        cin >> l >> r;
        if(l <= minl && r >= maxr)
            pos = i;
        else if(l < minl || r > maxr)
            pos = -1;
        minl = min(minl, l);
        maxr = max(maxr, r);
    }

    cout<<pos;
}

int main() {
    IO
    solve();
}
