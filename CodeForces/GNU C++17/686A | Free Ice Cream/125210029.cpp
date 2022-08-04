#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main(){
    ll n, x; cin>> n >> x;
    queue<pair<char, ll>> q;
    ll cnt(0);
    while(n--){
        char s; cin>>s;
        ll d; cin>>d;
        q.push(make_pair(s, d));
        if(q.back().first == '+')
            x += q.back().second;
        else if(q.back().first == '-' && x < q.back().second)
            cnt++;
        else
            x -= q.back().second;
    }
    cout<<x<<" "<<cnt;
}