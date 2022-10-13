#include <bits/stdc++.h>
#define TxtIO freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long

using namespace std;

void solve(){
    int k; cin >> k;
    string s; cin >> s;
    map<char, int> mp;

    for(int i = 0; i < s.size(); ++i)
        mp[s[i]]++;

    for(auto it: mp)
        if(it.second % k != 0){
            cout<<-1;
            return;
        }

    string l = "";
    for(auto it: mp){
        int t = it.second/k;
        for(int j = 0; j < t; ++j)
            l += it.first;
    }

    string ans;
    for(int i = 0; i < k; ++i)
        ans += l;

    cout<<ans;
}

int main() {
    IO
    //TxtIO
    solve();
}
