#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main(){
    string s; getline(cin, s);
    int cnt = 0;
    sort(s.begin(), s.end());
    for(int i = 0; i < s.length()-1; i++){
        if(s[i] > 96 && s[i] < 123){
            cnt++;
            if(s[i] == s[i+1]) cnt--;
        }
    }
    cout<<cnt;
}