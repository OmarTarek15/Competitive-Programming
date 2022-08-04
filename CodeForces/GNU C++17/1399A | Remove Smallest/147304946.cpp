#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        bool s = false;
        vector<int> v(n);
        for(int i = 0; i < n; ++i)
            cin>>v[i];
        sort(v.begin(), v.end());
        for(int i = 1; i < n; ++i){
            if(v[i] - v[i-1] > 1){
                s = true;
                cout<<"NO\n";
                break;
            }
        }
        if(!s)
            cout<<"YES\n";
    }
}
 
 