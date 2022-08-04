#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main(){
    int i, n; cin>> n;
    int sum(0);
    for(i=1;i<=n;++i){
        sum += i;
        if(sum == n){
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
}