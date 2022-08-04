#include <bits/stdc++.h>
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
 
using namespace std;
 
void solve(){
    int n, m; cin>> n;
    vector<int> v(n);
 
    for(int i = 0; i < n; ++i)
        cin>>v[i];
 
 
    cin>> m;
    vector<int> a(m);
    for(int i = 0; i < m; ++i)
        cin>> a[i];
 
 
    int max(0);
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            if(a[j] % v[i] == 0){
                if(a[j] / v[i] > max)
                    max = a[j] / v[i];
            }
        }
    }
 
    int cnt(0);
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            if(a[j] % v[i] == 0){
                if(a[j] / v[i] == max)
                    cnt++;
            }
        }
    }
 
    cout<<cnt;
}
 
int main() {
    IO
    solve();
}