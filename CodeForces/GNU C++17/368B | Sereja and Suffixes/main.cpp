#include <bits/stdc++.h>
#define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long

using namespace std;

void solve(){
    int n, m; cin >> n >> m;
    int a[100005], b[100005] = {0};
    bool visited[100005];

    for(int i = 1; i <= n; ++i)
        cin >> a[i];

    for(int i = n; i >= 1; --i){
        if(!visited[a[i]])
            b[i]++;
        visited[a[i]] = true;
    }

    for(int i = n; i >= 1; --i)
        b[i] += b[i+1];

    for(int i = 0; i < m; ++i){
        int l; cin >> l;
        cout<<b[l]<<"\n";
    }
}

int main() {
    IO
    //TxtIO
    solve();
}
