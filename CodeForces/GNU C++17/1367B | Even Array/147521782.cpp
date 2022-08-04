#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
 
int main(){
    int t; cin>>t;
    while(t--){
        int n, i; cin>>n;
        vector<int> v(n);
        for(i=0;i<n;++i)
            cin>>v[i];
        int even(0), odd(0);
        for(i=0;i<n;++i){
            if(i%2 != v[i] % 2){
                if(v[i] % 2 == 1)
                    odd++;
                else
                    even++;
            }
        }
        if(odd != even)
            cout<<-1<<"\n";
        else
            cout<<even<<"\n";
    }
}