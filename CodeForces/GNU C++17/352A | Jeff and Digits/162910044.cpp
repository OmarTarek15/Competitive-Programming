#include <bits/stdc++.h>
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
 
using namespace std;
 
void solve(){
    int n; cin>> n;
 
    int f(0), z(0), a;
    for(int i = 0; i < n; ++i){
        cin>>a;
        if(a == 0)
            z++;
        else
            f++;
    }
 
    if(z==0)
        cout<<-1;
    else if(f<9)
        cout<<0;
    else{
        f -= f % 9;
        for(int i = 0; i < f; ++i)
            cout<<5;
        for(int i = 0; i < z; ++i)
            cout<<0;
    }
}
 
int main() {
    IO
    solve();
}