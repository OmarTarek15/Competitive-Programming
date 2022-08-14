#include <bits/stdc++.h>
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long

using namespace std;

void solve(){
    int n, k; cin >> n >> k;
    vector<int> v(n);
    int x, l(0), c(1);

    for(int i = 0; i < n; ++i){
        cin >> x;
        if(x == l)
            c++;
        else
            c = 1;
        l = x;
    }

    if((c + k) > n)
        cout<< n - c;
    else
        cout<<-1;
}

int main() {
    IO
    solve();
}
