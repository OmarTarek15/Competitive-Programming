#include <bits/stdc++.h>
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long

using namespace std;

void solve(){
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);

    int cnt(0);
    int spaces(0);

    for(int i = 0; i < s2.size(); ++i)
        if(s2[i] == ' ')
            spaces++;

    for(int i = 0; i < s2.size(); ++i){
        if(s2[i] == ' ')
            continue;
        else{
            for(int j = 0; j < s1.size(); ++j){
                if(s1[j] == s2[i]){
                    s1.erase(s1.begin() + j);
                    cnt++;
                    break;
                }
            }
        }
    }

    if((cnt + spaces) == s2.size())
        cout<<"YES";
    else
        cout<<"NO";
}

int main() {
    IO
    solve();
}
