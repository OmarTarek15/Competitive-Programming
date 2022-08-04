#include <iostream>
using namespace std;
 
int main(){
   int n, cnt; cin>>n;
   cnt = 0;
   string s; cin>>s;
   if(s.size() > n || s.size() < n) return 0;
   for(int i = 0; i < n; ++i){
       if(s[i] == 'x' && s[i+1] == 'x' && s[i+2] == 'x') cnt++;
   }
   cout<<cnt;
}