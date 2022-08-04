#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
 
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> v;
        vector<int> v2;
        for(int i = 0; i < n; ++i){
            int a; cin>>a;
            v.push_back(a);
            v2.push_back(a);
        }
        sort(v2.begin(), v2.end());
        if(v == v2)
            cout<<"NO\n";
        else if(v[0] >= v[n-1])
            cout<<"YES\n";
        else
            cout<<"YES\n";
    }
}