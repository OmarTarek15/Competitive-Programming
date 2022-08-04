#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main(){
    int n, k; cin>> n >> k;
    int l = 2*n+1;
    vector<int> v(l);
    for(int i = 1; i <= l; ++i)
        cin>>v[i];
    for(int i = 1; i <= l; ++i){
        if(k != 0){
            if(i % 2 == 0){
                if(v[i] - 1 <= v[i-1] || v[i] - 1 <= v[i+1]){
                    continue;
                }
                else{
                    v[i]--;
                    k--;
                }
            }
        }
    }
    for(int i = 1; i <= l; ++i)
        cout<<v[i]<<" ";
}