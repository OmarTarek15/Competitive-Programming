#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
 
int main(){
    int n; cin>>n;
    string s = "ROYGBIV";
    int l = 0;
    for(int i = 0; i < n; ++i){
        cout<<s[l++];
        if(l == 7)
            l -= 4;
    }
}