#include <iostream>
#include <cstring>
#include <algorithm>
 
using namespace std;
 
int main(){
   char s[1000]; gets(s);
   int l = strlen(s);
   int cnt = 0;
   sort(s, s + l);
   //cout<<s<<endl;
   for(int i = 0; i < l-1; i++){
       if(s[i] > 96 && s[i] < 123){
           cnt++;
           if(s[i] == s[i+1]) cnt--;
       }
   }
    cout<<cnt;
   }
 