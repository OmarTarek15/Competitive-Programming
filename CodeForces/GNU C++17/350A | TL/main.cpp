#include <bits/stdc++.h>
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long

using namespace std;

void solve(){
    int n, m; cin >> n >> m;
    vector<int> v(n), v2(m);

    for(int i = 0; i < n; ++i)
        cin>> v[i];
    for(int i = 0; i < m; ++i)
        cin>> v2[i];

    sort(v.begin(), v.end());
    sort(v2.begin(), v2.end());

    int mini = 2 * v[0];
    mini = max(mini, v[n-1]);

    if(v2[0] <= mini)
        cout<<-1;
    else
        cout<<mini;
}

int main() {
    IO
    solve();
}
