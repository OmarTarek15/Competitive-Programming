#include <bits/stdc++.h>
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long

using namespace std;

void solve(){
    int n, k; cin >> n >> k;
    vector<int> v(n);

    for(int i = 0; i < n; ++i)
        cin >> v[i];

    int sum(0);
    for(int i = 0; i < k; ++i)
        sum += v[i];

    int min = sum, ans(0);
    for(int i = 0, j = k; j < n; ++i, ++j){
        sum = sum - v[i] + v[j];
        if(sum < min){
            min = sum;
            ans = i+1;
        }
    }

    cout<<ans+1;
}

int main() {
    IO
    solve();
}
