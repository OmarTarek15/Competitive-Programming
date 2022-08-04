#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main(){
    ll i;
 
    ll n, k, cnt(0); cin>>n>>k;
    vector<ll> v(n);
    for(i=0;i<n;++i)
        cin>>v[i];
    for(i=0;i<n,k>0;i++){
            if(v[i] < 0){
                v[i] *= -1;
                k--;
            }else
                break;
    }
    sort(v.begin(), v.end());
    if(k > 0){
        if(k % 2)
            v[0] *= -1;
    }
    for(i=0;i<n;++i)
        cnt += v[i];
    cout<<cnt;
}