#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main(){
    string s, l; cin>>s>>l;
    for(int i = 0; i < s.size(); ++i){
        if(s[i] == l[i])
            s[i] = '0';
        else if(s[i] != l[i])
            s[i] = '1';
    }
    cout<<s;
}