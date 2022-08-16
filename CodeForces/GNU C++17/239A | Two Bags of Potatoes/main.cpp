#include <bits/stdc++.h>
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long

using namespace std;

void solve(){
    int y, k, n; cin >> y >> k >> n;
    int x = k - y % k, t = n - y;

    if(x <= t){
        cout<<x<<" ";
        x += k;
        while(x <= t){
            cout<<x<<" ";
            x += k;
        }
    }else
        cout<<-1;

}

int main() {
    IO
    solve();
}
