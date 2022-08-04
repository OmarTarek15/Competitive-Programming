#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main(){
    int s, n, x, y; cin>>s>>n;
    vector<pair<int, int>> vec;
    for(int i = 0; i < n; ++i){
        cin>>x>>y;
        vec.push_back(make_pair(x, y));
    }
    sort(vec.begin(), vec.end());
    for(int i = 0; i < n; ++i){
        if(s <= vec[i].first){
            cout<<"NO";
            return 0;
        }
        else
            s += vec[i].second;
    }
    cout<<"YES";
}