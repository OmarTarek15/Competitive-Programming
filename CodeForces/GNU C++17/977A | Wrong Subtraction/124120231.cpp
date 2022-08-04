#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main(){
    int n, k, l; cin>>n>>k;
    for(int i = 0; i < k; ++i){
        l = n % 10;
        if(l == 0)
            n /= 10;
        else
            n -= 1;
    }
    cout<<n;
}