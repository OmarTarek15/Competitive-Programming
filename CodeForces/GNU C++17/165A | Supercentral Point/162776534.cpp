#include <bits/stdc++.h>
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
using namespace std;
 
void solve(){
    int n, m; cin>> n;
    m = n;
    vector<pair<int, int>> v;
 
    while(m--){
        int x, y; cin>> x >> y;
        v.push_back(make_pair(x,y));
    }
 
    bool w(0), x(0), y(0), z(0);
 
    int cnt(0);
    for(int i = 0; i < n; ++i){
        int left(0), right(0), up(0), down(0);
        for(int j = 0; j < n; ++j){
            if(v[i].first == v[j].first && v[i].second > v[j].second)
                down++;
            else if(v[i].first == v[j].first && v[i].second < v[j].second)
                up++;
            else if(v[i].first > v[j].first && v[i].second == v[j].second)
                left++;
            else if(v[i].first < v[j].first && v[i].second == v[j].second)
                right++;
 
            if(up > 0 && down > 0 && left > 0 && right > 0)
                if(down+up+right+left >= 4){
                    cnt++;
                    break;
                }
        }
    }
 
    cout<<cnt;
 
}
 
int main() {
    IO
    solve();
}