#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main(){
    int i, n; cin>>n;
    bool flag = false;
    vector<int> v(n);
    for(i=0;i<n;++i)
        cin>>v[i];
    sort(v.begin(), v.end());
    for(i=1;i<n;++i){
        if(v[i] > v[i-1]){
            cout<<v[i];
            flag = true;
            break;
        }
    }
    if(!flag)
        cout<<"NO";
}