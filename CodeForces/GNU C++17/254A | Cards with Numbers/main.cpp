#include <bits/stdc++.h>
#define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long

using namespace std;

void solve(){
    int n; cin >>n;
    vector<int> v[5001];

    for(int i = 1; i <= n*2; ++i){
        int x; cin >> x;
        v[x].push_back(i);
    }

    bool f = true;
    for(int i = 1; i < 5001; ++i){
        if(v[i].size() % 2 == 1){
            f = false;
            break;
        }
    }

    if(f){
        for(int i = 1; i < 5001; ++i){
            for(int j = 0; j < v[i].size(); j+=2)
                cout<<v[i][j]<<" "<<v[i][j+1]<<endl;
        }
    }else
        cout<<-1;

}

int main() {
    IO
    TxtIO
    solve();
}
