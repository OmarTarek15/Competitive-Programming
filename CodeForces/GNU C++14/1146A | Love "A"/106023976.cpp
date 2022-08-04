#include <iostream>
 
using namespace std;
 
int main() {
   string s;
   int cnt = 0;
   cin>>s;
   for(int i = 0; i < s.size(); ++i){
        if(s[i] == 'a') cnt++;
   }
    if(cnt > s.size()-cnt){
        cout<<s.size()<<endl;
    }else{
        cout<<cnt + (cnt - 1)<<endl;
    }
}
 
 