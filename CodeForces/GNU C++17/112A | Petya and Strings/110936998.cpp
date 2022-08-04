#include <iostream>
#include <algorithm>
using namespace std;
 
int main() {
   string s, z; cin>>s>>z;
    for(int i = 0; i < s.size(); ++i){
        if(isupper(s[i])) s[i] = tolower(s[i]);
    }
    for(int i = 0; i < z.size(); ++i){
        if(isupper(z[i])) z[i] = tolower(z[i]);
    }
    if(s > z) cout<<1;
    if(z > s) cout<<-1;
    if(s == z) cout<<0;
}