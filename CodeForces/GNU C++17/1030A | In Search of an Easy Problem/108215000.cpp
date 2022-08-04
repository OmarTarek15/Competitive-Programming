#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int n, x, cnt; cin>>n;
    cnt = 0;
    while(n--){
        cin>>x;
        if(x == 1) {
            cout<<"HARD";
            return 0;
        }else{
            cnt++;
        }
    }
    if(cnt = n) cout<<"EASY";
}
 
 