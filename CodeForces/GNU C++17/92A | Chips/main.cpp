#include <bits/stdc++.h>
#define TxtIO freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
 
using namespace std;
 
void solve(){
    int n, m; cin >> n >> m;
    vector<int> v;
 
    for(int i = 1; i <= n; ++i)
        v.push_back(i);
 
    int i(0);
    while(m > 0){
        if(i == n)
            i = 0;
        if(m >= v[i]){
            if((m-v[i]) >= 0){
                m -= v[i];
                i++;
            }
        }else
            break;
 
    }
 
    cout<<m;
}
 
int main() {
    IO
    //TxtIO
    solve();
}
