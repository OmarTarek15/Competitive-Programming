#include <bits/stdc++.h>
#define TxtIO freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long

using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> v(n);

    for(int i = 0; i < n; ++i)
        cin >> v[i];

    sort(v.begin(), v.end());
    swap(v[0], v[n-1]);

    for(int i = 0; i < n; ++i)
        cout<<v[i]<<" ";
}

int main() {
    IO
    //TxtIO
    solve();
}
