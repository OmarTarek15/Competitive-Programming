#include <bits/stdc++.h>
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
using namespace std;
 
void solve(){
    int n; cin>> n;
    vector<int> v(7);
 
    for(int i = 0; i < 7; ++i)
        cin>>v[i];
 
    int i(0), a = v[0];
    while(a < n){
        i++;
        i %= 7;
        a += v[i];
    }
 
    cout<<i+1;
}
 
int main() {
    IO
    solve();
}