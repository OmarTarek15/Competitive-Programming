#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
 
int main(){
    int n; cin>>n;
    int cnt = 0;
    char alph[] = "abcdefghijklmnopqrstuvwxyz";
    string s; cin>>s;
    for(int i = 0; i < s.size(); ++i){
        if(isupper(s[i])) s[i] = tolower(s[i]);
    }
    sort(s.begin(), s.end());
    if(n < 26){
        cout<<"NO";
        return 0;
    }
    int j = 0;
    for(int i = 0; i < s.size(); ++i){
        if(s[i] == alph[j]){
            if(s[i] == s[i+1]) continue;
            cnt++;
            j++;
        }
    }
    if(cnt == 26) cout<<"YES";
    else cout<<"NO";
}