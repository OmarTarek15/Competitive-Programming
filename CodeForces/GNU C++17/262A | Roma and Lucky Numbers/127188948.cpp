#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main(){
    int i, j, n, k; cin>> n >> k;
    int cnt(0), lck(0);
    string s;
    while(n--){
        cin>>s;
        for(i=0;i<s.size();++i){
            if(s[i] == '4' || s[i] == '7')
                lck++;
        }
        if(lck <= k)
            cnt++;
        lck = 0;
    }
    cout<<cnt;
}