#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
 
int main(){
    int n, k; cin>>n>>k;
    int base = 1200, cnt(0);
    for(int i = 1; i <= n; ++i){
        base += 5 * i;
        if(base + k <= 1440){
            cnt++;
        }else
            break;
    }
    cout<<cnt;
}