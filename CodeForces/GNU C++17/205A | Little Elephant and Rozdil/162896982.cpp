#include <bits/stdc++.h>
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
 
using namespace std;
 
void solve(){
    int n; cin>> n;
    vector<int> v(n);
 
    for(int i = 0; i < n; ++i)
        cin>> v[i];
 
    ll min(10000000000);
    int city;
    for(int i = 0 ; i < n; ++i){
        if(v[i] < min){
            min = v[i];
            city = i+1;
        }
    }
 
    int cnt(0);
    for(auto i: v)
        if(i == min)
            cnt++;
 
    if(cnt>1)
        cout<<"Still Rozdil";
    else
        cout<<city;
}
 
int main() {
    IO
    solve();
}