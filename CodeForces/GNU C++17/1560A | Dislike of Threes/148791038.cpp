#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
 
void solve(){
    int k, i; cin>>k;
    vector<int> v;
    for(i=1;i<1667;++i){
        if(i%3 == 0 || i%10 == 3)
            continue;
        else
            v.push_back(i);
    }
    cout<<v[k-1]<<"\n";
}
 
int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
}