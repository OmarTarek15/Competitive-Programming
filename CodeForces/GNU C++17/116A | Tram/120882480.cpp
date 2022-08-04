#include <bits/stdc++.h>
using namespace std;
 
 
int main(){
    int n; cin>>n;
    int capac(0), maxi(0);
    while(n--){
     int a, b; cin>>a>>b;
     capac -= a;
     capac += b;
     if(capac > maxi)
         maxi = capac;
    }
    cout<<maxi;
}