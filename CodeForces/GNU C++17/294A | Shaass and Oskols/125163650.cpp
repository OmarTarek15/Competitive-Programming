#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main(){
   int n; cin>>n;
   vector<int> v(n);
   for(int i = 1; i <= n; ++i)
       cin>>v[i];
   int m, x, y; cin>>m;
   while(m--){
       cin>>x>>y;
       if(x == n){
           v[x-1] += y-1;
           v[x] = 0;
       }
       else if(x == 1){
           v[x+1] += v[x]-y;
           v[x] = 0;
       }
       else{
           v[x-1] += y-1;
           v[x+1] += v[x]-y;
           v[x] = 0;
       }
   }
   for(int i = 1; i <= n; ++i)
       cout<<v[i]<<"\n";
}