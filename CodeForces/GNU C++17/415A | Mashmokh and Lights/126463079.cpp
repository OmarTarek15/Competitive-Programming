#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main(){
    int i, j, n, m, b; cin>>n>>m;
    int a[103] = {0};
    for(i=0;i<m;++i){
        cin>>b;
        for(j=b;j<=n;++j){
            if(a[j] == 0) a[j] = b;
        }
    }
    for(i=1;i<=n;++i)
        cout<<a[i]<<" ";
}