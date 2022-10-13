#include <bits/stdc++.h>
#define TxtIO freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
 
using namespace std;
 
void solve(){
    int t; cin >> t;
 
    while(t--){
        int a; cin >> a;
        if(360 % (180 - a) == 0)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}
 
int main() {
    IO
    //TxtIO
    solve();
}
