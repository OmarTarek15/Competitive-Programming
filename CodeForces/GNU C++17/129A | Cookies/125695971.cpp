#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main(){
    int i, n;
    cin>>n;
    vector<int> v(n);
    int cnt(0), sum(0);
    if(n == 1){
        cnt = 1;
        cout<<cnt;
        return 0;
    }
    for(i=0; i<n; ++i){
        cin>>v[i];
        sum += v[i];
    }
    for(i=0; i<n; ++i){
        if( (sum - v[i]) % 2 == 0)
            cnt++;
    }
    cout<<cnt;
}