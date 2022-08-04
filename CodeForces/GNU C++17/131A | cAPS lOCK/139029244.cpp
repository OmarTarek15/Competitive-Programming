#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int i;
    string s; cin>>s;
    bool l = true, k = true;
    for(i=0;i<s.size();++i){
        if(isupper(s[i]))
            continue;
        else
            l = false;
    }
    for(i=1;i<s.size();++i){
        if(islower(s[0]) && isupper(s[i]))
            continue;
        else
            k = false;
    }
    if(l || k){
        for(i=0;i<s.size();++i){
            if(isupper(s[i]))
                s[i] = tolower(s[i]);
            else if(islower(s[i]))
                s[i] = toupper(s[i]);
        }
    }
    cout<<s;
}