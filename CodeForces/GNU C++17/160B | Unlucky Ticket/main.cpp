#include <bits/stdc++.h>
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long

using namespace std;

void solve(){
    int n; cin >> n;
    string s; cin >> s;

    vector<int> h1, h2;
    for(int i = 0; i < n; ++i){
        h1.push_back(s[i] - 48);
    }
    for(int i = n; i < s.size(); ++i){
        h2.push_back(s[i] - 48);
    }

    sort(h1.begin(), h1.end());
    sort(h2.begin(), h2.end());

    bool less = true;
    for(int i = 0; i < h1.size(); ++i){
        if(h1[i] < h2[i])
            continue;
        else
            less = false;
    }

    bool more = true;
    if(!less){
        for(int i = 0; i < h1.size(); ++i){
            if(h1[i] > h2[i])
                continue;
            else
                more = false;
        }
    }

    if(less || more)
        cout<<"YES";
    else
        cout<<"NO";
}

int main() {
    IO
    solve();
}
