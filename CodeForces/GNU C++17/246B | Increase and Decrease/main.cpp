#include <bits/stdc++.h>
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long

using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> v(n);

    for(int i = 0; i < n; ++i)
        cin>>v[i];
    int sum(0);
    for(int i = 0; i < n; ++i)
        sum += v[i];

    if(sum % n == 0)
        cout<<n;
    else
        cout<<n-1;
}

int main() {
    IO
    solve();
}
