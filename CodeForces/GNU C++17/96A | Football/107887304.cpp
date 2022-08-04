#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    string s; cin>>s;
    int cnt = 0;
    for(int i = 0; i < s.length(); ++i){
        if(s[i] == s[i+1]){
            cnt++;
            if((cnt + 1) == 7){
                cout<<"YES";
                return 0;
            }
        }else{
            cnt = 0;
        }
    }
    if(cnt != 7) cout<<"NO";
}