#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
 
int main(){
    int t, i, j; cin>>t;
    while(t--){
        string key, s; cin>>key>>s;
        if(s.size() == 1){
            cout<<0<<"\n";
            continue;
        }
        int cnt(0), a(0), b(0);
        for(i=0;i<s.size();++i){
            if(i == s.size() - 1)
                continue;
            if(s[i] != s[i+1]){
                for(j=0;j<key.size();++j){
                    if(key[j] == s[i])
                        a = j+1;
                    else if(key[j] == s[i+1])
                        b = j+1;
                }
                cnt += abs(a-b);
            }
        }
        cout<<cnt<<"\n";
    }
}