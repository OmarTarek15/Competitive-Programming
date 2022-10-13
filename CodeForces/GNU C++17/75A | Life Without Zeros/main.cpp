#include <bits/stdc++.h>
#define TxtIO freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
 
using namespace std;
 
void solve(){
    string a, b; cin >> a >> b;
    string x = "", y = "", z = "";
 
    int c = stoi(a) + stoi(b);
    string r = to_string(c);
 
    for(int i = 0; i < r.size(); ++i)
        if(r[i] != '0')
            z += r[i];
    for(int i = 0; i < a.size(); ++i)
        if(a[i] != '0')
            x += a[i];
    for(int i = 0; i < b.size(); ++i)
        if(b[i] != '0')
            y += b[i];
 
    int l = stoi(x) + stoi(y);
    int s = stoi(z);
 
    if(l == s)
        cout<<"YES";
    else
        cout<<"NO";
}
 
int main() {
    IO
    //TxtIO
    solve();
}
