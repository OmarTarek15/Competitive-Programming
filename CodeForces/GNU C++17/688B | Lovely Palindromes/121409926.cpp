#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
string palin(string &s){
    string n = s;
    for(int i = s.length()-1; i >= 0; --i){
        n += s[i];
    }
    return n;
}
int main(){
    string n; cin>>n;
    cout<<palin(n);
}