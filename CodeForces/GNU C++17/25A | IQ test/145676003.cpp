#include <bits/stdc++.h>
 
using namespace std;
 
 
int main(){
    int n,i; cin>>n;
    vector<int> v(n);
    for(i=1;i<=n;++i)
        cin>>v[i];
    int even(0), odd(0);
    for(i=1;i<=n;++i)
        if(v[i] & 1)
            odd++;
        else
            even++;
    int idx;
    if(even == 1){
        for(i=1;i<=n;++i)
            if(v[i] % 2 == 0){
                idx = i;
                break;
            }
    }else if(odd == 1){
        for(i=1;i<=n;++i)
            if(v[i] & 1){
                idx = i;
                break;
            }
    }
 
    cout<<idx;
}