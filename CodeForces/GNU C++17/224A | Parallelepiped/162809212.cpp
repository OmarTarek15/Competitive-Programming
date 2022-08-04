#include <bits/stdc++.h>
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
using namespace std;
 
void solve(){
    int a, b, c; cin>> a >> b >> c;
    int s1 = sqrt((a*b)/c), s2 = sqrt((a*c)/b), s3 = sqrt((b*c)/a);
 
    int ans = 4*(s1+s2+s3);
    cout<<ans;
}
 
int main() {
    IO
    solve();
}