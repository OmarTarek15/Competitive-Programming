#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int n; cin>> n;
 
    if(n&1){
        cout<<"-1";
        return 0;
    }
 
    vector<int> v;
    for(int i = 1; i <= n; ++i)
        v.push_back(i);
    for(int i = 0; i < v.size(); ++i){
        if(i == v.size())
            break;
        swap(v[i], v[i+1]);
        i+=1;
    }
    for(int i : v)
        cout<<i<<" ";
}