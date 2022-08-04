#include <bits/stdc++.h>
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
using namespace std;
 
void solve(){
    int n; cin>> n;
    vector<int> v(n);
 
    for(int i = 0; i < n; ++i)
        cin>> v[i];
 
    int a, b, min(100000);
    if(abs(v[0]-v[n-1]) < min){
        min = abs(v[0] - v[n-1]);
        a = n; b = 1;
    }
    for (int i = 0; i < n; ++i) {
        if(i == n-1)
            break;
        if(abs(v[i] - v[i+1]) < min){
            min = abs(v[i] - v[i+1]);
            a = i+1; b = i+2;
        }
    }
 
    cout<<a<<" "<<b;
}
 
int main() {
    IO
    solve();
}