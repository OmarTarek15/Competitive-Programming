#include<bits/stdc++.h>
#define ll long long
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
 
 
void solve(){
   int k, i; cin>>k;
   if(k==0){
       cout<<0;
       return;
   }
   vector<int> v(12);
   for(i=0;i<12;++i)
       cin>>v[i];
   sort(v.begin(), v.end());
   int ans(0), cnt(0);
   for(i=11;i>=0;i--){
       ans+=v[i];
       cnt++;
       if(ans>=k)
           break;
       else
           continue;
   }
   if(ans<k){
       cout<<-1;
       return;
   }
   cout<<cnt;
}
 
int main(){
    fast
    //int t; cin>>t;
    //while(t--){
        solve();
    //}
}