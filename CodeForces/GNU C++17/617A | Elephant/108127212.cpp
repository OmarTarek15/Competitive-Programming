#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int x, cnt; cin>>x;
    cnt = x / 5;
    if(x % 5 > 0){
        cnt++;
    }
    cout<<cnt;
}