#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    string s; cin>>s;
    int cnt = 0;
    for(int i = 0; i < s.size(); ++i){
        if(s[i] == 'H' || s[i] == 'Q' || s[i] == '9'){
        cout<<"YES";
        return 0;
        }
        else{
           cnt++;
           if(cnt == s.size()) cout<<"NO";
        }
    }
}
 