#include <iostream>
#include <cstring>
#include <algorithm>
 
using namespace std;
 
int main(){
   string s; cin>>s;
   int c1 = 0, c2 = 0, c3 = 0;
   for(int i = 0; i < s.size(); ++i){
       if(s[i] == '1') c1++;
       if(s[i] == '2') c2++;
       if(s[i] == '3') c3++;
   }
   for(int i = 0; i < s.size(); ++i){
       while(c1 > 0){
           cout<<'1';
           c1--;
           if(c2 == 0 && c3 == 0 && c1 == 0) return 0;
           else cout<<'+';
       }
       while(c1 == 0 && c2 > 0){
           cout<<'2';
           c2--;
           if(c3 == 0 && c2 == 0) return 0;
           else cout<<'+';
       }
       while(c1 == 0 && c2 == 0 && c3 > 0){
           cout<<'3';
           c3--;
           if(c3 == 0) return 0;
           else cout<<'+';
       }
   }
}
 