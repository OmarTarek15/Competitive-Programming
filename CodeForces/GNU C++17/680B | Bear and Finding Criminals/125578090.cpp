#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main(){
    int n, a; cin>>n>>a;
    vector<int> v(n);
    for(int i = 1; i <= n; ++i)
        cin>>v[i];
    int cnt = v[a], l = a-1, r = a+1;
    for(int i = 1; i <= n; ++i){
        if(l >= 1 && r <= n){
            if(v[l] == 1 && v[r] == 1)
                cnt += 2;
        }
        else if(l >= 1)
            cnt += v[l];
        else if(r <= n)
            cnt += v[r];
        l--;
        r++;
    }
    cout<<cnt;
}