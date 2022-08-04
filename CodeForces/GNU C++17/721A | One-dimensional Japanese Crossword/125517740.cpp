#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main(){
    int n; cin>> n;
    string s; cin>> s;
    vector<int> v;
    int cnt(0), cnt2(0);
    for(int i = 0; i < s.length(); ++i)
        if(s[i] == 'B')
            cnt2++;
    if(cnt2 == s.length()){
        cnt2 = 1;
    }else{
        cnt2 = 0;
        for(int i = 0; i < s.length(); ++i)
            if(s[i] == 'B' && s[i+1] == 'W' || (i == s.length()-1 && s[i] != 'W'))
                cnt2++;
    }
    for(int i = 0; i < s.length(); ++i)
        if(s[i] == 'B'){
            cnt++;
            if(s[i+1] == 'W' || i == s.length()-1){
                v.push_back(cnt);
                cnt = 0;
            }
        }
    cout<<cnt2<<"\n";
    for(int i = 0; i < v.size(); ++i)
        cout<<v[i]<<" ";
}