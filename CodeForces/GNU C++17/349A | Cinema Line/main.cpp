#include <bits/stdc++.h>
#define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long

using namespace std;

void solve(){
   int n; cin >> n;
   int c(0), f(0);

   for(int i = 0; i < n; ++i){
       int x; cin >> x;
       if(x == 25)
           c++;
       else if(x == 50){
           if(c >= 1){
               c--;
               f++;
           }else{
               cout<<"NO";
               return;
           }
       }else if(x == 100){
           if(f >= 1 && c >= 1){
               f--;
               c--;
           }else if(f == 0 && c >= 3)
               c -= 3;
           else{
               cout<<"NO";
               return;
           }
       }
   }
   cout<<"YES";
}

int main() {
    IO
    //TxtIO
    solve();
}
