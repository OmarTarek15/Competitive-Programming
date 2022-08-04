#include <bits/stdc++.h>
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
using namespace std;
 
void solve(){
    int n, m, z;
    cin>> m >> n >> z;
    int cnt(0);
    for(int i = m; i <= z; i+=m)
        for(int j = n; j <= i; j+=n)
            if(i == j)
                cnt++;
    cout<<cnt;            
}
 
int main(){
    IO
    solve();
}