#include <bits/stdc++.h>
#define TxtIO freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long

using namespace std;

void solve(){
    int n, m; cin >> n >> m;
    char a[12][12];

    for(int i = 0; i < n; ++i)
        for(int j = 0; j < m; ++j)
            cin >> a[i][j];

    int cnt(0);
    for(int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j){
            if(a[i][j] == 'W'){
                if(a[i-1][j] == 'P' || a[i][j-1] == 'P' || a[i+1][j] == 'P' || a[i][j+1] == 'P')
                    cnt++;
            }
        }
    }

    cout<<cnt;
}

int main() {
    IO
    //TxtIO
    solve();
}
