#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main(){
    int i, cnt(0);
    string s; cin>>s;
    while(s.length() > 1){
        int sum(0);
        for(i=0;i<s.length();++i)
            sum += s[i] - '0';
        cnt++;
        s = to_string(sum);
    }
    cout<<cnt;
}