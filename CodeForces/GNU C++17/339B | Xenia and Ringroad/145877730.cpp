#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
 
int main(){
    int n, m, i; cin>>n>>m;
    ll cnt(0), init(1);
    for(i=0;i<m;++i){
        int a; cin>>a;
        if(a >= init){
            cnt += a - init;
        }else{
            cnt += n-(init-a);
        }
        init = a;
    }
    cout<<cnt;
}