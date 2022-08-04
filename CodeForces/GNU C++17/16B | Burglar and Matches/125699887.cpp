#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
bool sortbysec(const pair<int,int> &a, const pair<int,int> &b){
    return a.second > b.second;
}
int main(){
    int i, n, m; cin>>n>>m;
    int a, b, cnt(0);
    vector<pair<int, int>> v;
 
    for(i=0;i<m;++i){
        cin>>a>>b;
        v.push_back(make_pair(a, b));
    }
    sort(v.begin(), v.end(), sortbysec);
 
    for(i=0;i<m;++i){
        if(v[i].first <= n){
            cnt += v[i].first * v[i].second;
            n -= v[i].first;
        }else{
            cnt += n * v[i].second;
            n = 0;
        }
        if(n <= 0)
            break;
    }
    cout<<cnt;
}