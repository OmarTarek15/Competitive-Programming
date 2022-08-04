#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main(){
    int t; cin>>t;
    while(t--){
        ll n, mins; cin>>n;
        if(n % 2 != 0)
            n++;
        if(n <= 6)
            mins = 15;
        else if(n % 2 == 0)
            mins = (n * 5) / 2;
        cout<<mins<<"\n";
    }
}