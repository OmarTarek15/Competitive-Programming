#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int n; cin>>n;
    int cnt = 0;
    string s; cin>>s;
    if(s.length() != n) return 0;
    for(int i = 0; i < n; ++i){
        if(s[i] == s[i+1]) cnt++;
    }
    cout<<cnt;
}