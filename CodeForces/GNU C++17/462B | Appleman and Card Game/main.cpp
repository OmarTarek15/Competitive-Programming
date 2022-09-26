#include <bits/stdc++.h>
#define TxtIO freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long

using namespace std;

void solve(){
    ll n, k; cin >> n >> k;
    string s; cin >> s;
    map<char, int> mp;

    for(int i = 0; i < s.size(); ++i)
        mp[s[i]]++;

    vector<ll> v;
    for(auto it: mp)
        v.push_back(it.second);

    ll ans(0);
    sort(v.begin(), v.end(), greater<ll>());

    ll i(0);
    while(k > 0 && i < v.size()){
        if(v[i] > k){
            ans += k * k;
            break;
        }else{
            ans += v[i] * v[i];
            k -= v[i];
        }
        i++;
    }

    cout<<ans;

}

int main() {
    IO
    //TxtIO
    solve();
}
