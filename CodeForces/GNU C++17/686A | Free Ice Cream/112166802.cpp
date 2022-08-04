#include <iostream>
#include <cstring>
#include <algorithm>
 
using namespace std;
 
int main(){
   int n; cin>>n;
   long long x; cin>>x;
   int dist = 0;
   while(n--){
       char s; cin>>s;
       long long d; cin>>d;
       if(s == '+') x += d;
       if(s == '-'){
           if(x < d) dist++;
           else x -= d;
       }
   }
   cout<<x<<" "<<dist;
}
 