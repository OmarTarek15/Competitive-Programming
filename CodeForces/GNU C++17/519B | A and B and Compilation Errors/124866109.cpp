#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main(){
   int n, x; cin>>n;
   int a(0), b(0), c(0);
   for(int i = 0; i < n; ++i){
       cin>>x;
       a += x;
   }
   for(int i = 0; i < n-1; ++i){
       cin>>x;
       b += x;
   }
   for(int i = 0; i < n-2; ++i){
       cin>>x;
       c += x;
   }
   cout<<a-b<<"\n";
   cout<<b-c;
}