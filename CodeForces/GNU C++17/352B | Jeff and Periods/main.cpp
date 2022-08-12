#include <bits/stdc++.h>
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long

using namespace std;

void solve(){
    int n; cin>> n;
    vector<int> v[100001];

    for(int i = 0; i < n; ++i){
        int x; cin>> x;
        v[x].push_back(i);
    }

    vector<pair<int, int>> p;
    for(int i = 0; i < 100001; ++i){
        if(v[i].size() == 0)
            continue;
        else if(v[i].size() == 1)
            p.push_back({i,0});
        else{
            int diff = v[i][1] - v[i][0];
            bool flag = true;
            for(int j = 1; j < v[i].size(); ++j){
                if(v[i][j] - v[i][j-1] != diff){
                    flag = false;
                    break;
                }
            }
            if(flag)
                p.push_back({i,diff});
        }
    }

    cout<<p.size()<<endl;
    for(int i = 0; i < p.size(); ++i)
        cout<<p[i].first<<" "<<p[i].second<<endl;
}

int main() {
    IO
    solve();
}
