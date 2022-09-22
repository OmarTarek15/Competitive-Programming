#include <bits/stdc++.h>
#define TxtIO freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long

using namespace std;

void solve(){
    int n; cin >> n;
    int a,b, x, y; cin >> a >> b;
    int c(1), ans(1);

    while(--n){
        cin>> x >> y;
        if(a == x && b == y){
            c++;
            if(c > ans)
                ans = c;
        }else{
            c = 1;
        }
        a = x; b = y;
    }

    cout<<ans;
}

int main() {
    IO
    //TxtIO
    solve();
}
