#include <bits/stdc++.h>
#define TxtIO freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
 
using namespace std;
 
void solve(){
    int n; cin >> n;
    if(n <= 10 || (n >= 22 && n <= 25))
        cout<<0;
    else if(n == 11 || n == 21 || (n >= 12 && n <= 19))
        cout<<4;
    else if(n == 20)
        cout<<15;
}
 
int main() {
    IO
    //TxtIO
    solve();
}
