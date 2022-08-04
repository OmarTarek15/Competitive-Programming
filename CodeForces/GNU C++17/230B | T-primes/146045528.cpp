#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
bool prime[1000001];
void Sieve(){
    int i, j;
    prime[0] = prime[1] = true;
    for(i=4;i<1000001;i+=2)
        prime[i] = true;
    for(i=3;i*i<=1000001;i+=2)
        if(!prime[i])
            for(j=i*i;j<1000001;j+=2*i)
                prime[j] = true;
}
 
int main(){
    Sieve();
    ll n, i, p; cin>>n;
    for(i=0;i<n;++i){
        cin>>p;
        ll s = sqrt(p);
        if(s*s == p && !prime[s])
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}