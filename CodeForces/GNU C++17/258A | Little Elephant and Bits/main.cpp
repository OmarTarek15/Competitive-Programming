#include <bits/stdc++.h>
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long

using namespace std;

void solve(){
    string a; cin >> a;

    bool ones = true;
    for(int i = 0; i < a.size(); ++i){
        if(a[i] == '1')
            continue;
        else
            ones = false;
    }

    if(ones)
        a.erase(a.begin());

    for(int i = 0; i < a.size(); ++i)
        if(a[i] == '0'){
            a.erase(a.begin()+i);
            break;
        }

    cout<<a;
}

int main() {
    IO
    solve();
}
