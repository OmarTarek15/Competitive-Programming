#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
 
int main(){
    int t; cin>>t;
    while(t--){
        int n,i,j; cin>>n;
        vector<int> v(n);
        for(i=0;i<n;++i)
            cin>>v[i];
        int key;
        for(i=0;i<n;++i){
            for(j=i+1;j<n;++j){
                if(v[i] == v[j])
                    key = v[i];
            }
        }
        for(i=0;i<n;++i)
            if(v[i] != key){
                cout<<i+1<<"\n";
            }
    }
}