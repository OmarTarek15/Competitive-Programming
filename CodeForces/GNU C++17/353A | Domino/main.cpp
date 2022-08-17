#include <bits/stdc++.h>
#define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long

using namespace std;

void solve(){
    int n; cin >> n;
    int x, y, s1(0), s2(0);
    bool f = false;

    while(cin >> x >> y){
        if(n == 1 && x % 2 + y % 2 == 1){
            cout<<-1;
            return;
        }
        if(y % 2 + x % 2 == 1)
            f = true;
        s1 += x;
        s2 += y;
    }

    if(s1 % 2 == 0 && s2 % 2 == 0)
        cout<<0;
    else if(s1 % 2 == 1 && s2 % 2 == 1 && f)
        cout<<1;
    else
        cout<<-1;
}

int main() {
    IO
    //TxtIO
    solve();
}
