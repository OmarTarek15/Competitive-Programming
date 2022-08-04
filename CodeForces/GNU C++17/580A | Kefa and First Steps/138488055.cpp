#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n, i; cin>>n;
    vector<int> v(n);
    for(i=0;i<n;++i)
        cin>>v[i];
    int cnt(1), maxi(1);
    for(i=0;i<n;++i){
        if(i>0){
            if(v[i] >= v[i-1]){
                cnt++;
                maxi = max(maxi, cnt);
            }else
                cnt = 1;
        }
    }
    cout<<maxi;
}