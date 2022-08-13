#include <bits/stdc++.h>
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long

using namespace std;

void solve(){
    string s; cin>> s;
    int oddOcc(0);
    map<char, int> mp;

    for(int i = 0; i < s.size(); ++i){
        mp[s[i]]++;
    }
    for(auto it: mp){
        if(it.second & 1)
            oddOcc++;
    }

    if(oddOcc == 0){
        cout<<"First";
        return;
    }else if(oddOcc == 1){
        cout<<"First";
        return;
    }else if(oddOcc % 2 == 0){
        cout<<"Second";
        return;
    }else{
        cout<<"First";
        return;
    }

}

int main() {
    IO
    solve();
}
