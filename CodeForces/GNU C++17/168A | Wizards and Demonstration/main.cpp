#include <bits/stdc++.h>
#define TxtIO freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
 
using namespace std;
 
void solve(){
    float n, x, y; cin >> n >> x >> y;
 
    float p = y / 100;
    int a = ceil(p * n);
 
    int ans;
    if(a == x || a < x)
        ans = 0;
    else
        ans = a - x;
 
    cout<<ans;
}
 
int main() {
    IO
    //TxtIO
    solve();
}
