#include <bits/stdc++.h>
 
using namespace std;
 
 
int main(){
    int n, m, i; cin>>n>>m;
    vector<int> v(m);
    for(i=0;i<m;++i)
        cin>>v[i];
    sort(v.begin(), v.end());
    int cnt = v[n-1] - v[0];
    for(i=1;i<=m-n;++i){
        if(v[i+n-1] - v[i] < cnt)
            cnt = v[i+n-1] -v[i];
    }
    cout<<cnt;
}