#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main(){
    int n; cin>>n;
    vector<int> v(n);
    for(int i = 0; i < n; ++i)
        cin>>v[i];
    sort(v.begin(), v.end());
    int cnt(0), sum(0);
    for(int i = 0; i < n; ++i){
        if(v[i] >= sum){
            cnt++;
            sum += v[i];
        }
    }
     cout<<cnt;
}