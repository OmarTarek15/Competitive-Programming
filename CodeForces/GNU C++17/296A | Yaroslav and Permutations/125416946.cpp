#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main(){
    int n; cin>>n;
    vector<int> v(n);
    for(int i = 0; i < n; ++i)
        cin>>v[i];
    sort(v.begin(), v.end());
    int s(1), m(1);
    for(int i = 1; i < n; ++i){
        if(v[i] == v[i-1]){
            s++;
            if(s>m)
                m = s;
        }
        else
            s = 1;
    }
    if(m <= (n+1)/2)
        cout<<"YES";
    else
        cout<<"NO";
}