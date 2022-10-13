#include <bits/stdc++.h>
#define TxtIO freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
 
using namespace std;
 
void solve(){
    int n, k; cin >> n >> k;
 
    for (int i = 0; i < k; ++i){
        cout<<n-i<<" ";
    }
 
    cout<<1<<" ";
 
    for (int i = 2; i <= n - k; ++i) {
        cout<< i <<" ";
    }
}
 
int main() {
    IO
    //TxtIO
    solve();
}
