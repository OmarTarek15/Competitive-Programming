#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int n, p, q, cnt, plc; cin>>n;
    cnt = 0;
    while(n--){
        cin>>p>>q;
        if(p == q) continue;
        plc = q - p;
        if(plc >= 2) cnt++;
    }
    cout<<cnt;
}