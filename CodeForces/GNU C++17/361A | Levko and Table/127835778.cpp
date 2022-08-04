#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main(){
    int i, j;
 
    int n, k; cin>>n>>k;
    for(i=1;i<=n;++i){
        for(j=1;j<=n;++j){
            if(i == j)
                cout<<k<<" ";
            else
                cout<<"0 ";
        }
        cout<<"\n";
    }
 
}