#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main(){
   int n, l, r, a(0), b(0); cin>>n;
   int i;
   for(i=0;i<n;++i){
       cin>>l>>r;
       a += l;
       b += r;
   }
   cout<<min(a, n-a) + min(b, n-b);
}