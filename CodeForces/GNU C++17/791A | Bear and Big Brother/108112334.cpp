#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
   int a, b; cin>>a>>b;
   int cnt = 0;
   bool bear = true;
   while(bear){
    a = a * 3;
    b = b * 2;
    cnt++;
    if(a > b) bear = false;
   }
   cout<<cnt;
}