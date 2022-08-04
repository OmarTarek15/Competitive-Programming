#include <bits/stdc++.h>
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
 
using namespace std;
 
void solve(){
    string n; cin>> n;
    bool flag = true;
 
    for(int i = 0; i < n.size();){
        if(n[i] == '1' && n[i+1] == '4' && n[i+2] == '4')
            i+=3;
        else if(n[i] == '1' && n[i+1] == '4')
            i+=2;
        else if(n[i] == '1')
            i++;
        else{
            flag = false;
            break;
        }
    }
 
    if(flag)
        cout<<"YES";
    else
        cout<<"NO";
}
 
int main() {
    IO
    solve();
}