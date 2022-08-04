#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
 
int main(){
    int n, i; cin>>n;
    map<string, int> mp;
    string s;
    while(n--){
        cin>>s;
        if(mp.find(s) == mp.end()){
            cout<<"OK\n";
            mp[s] = 1;
        }else{
            cout<<s<<mp[s]<<"\n";
            mp[s]++;
        }
    }
}