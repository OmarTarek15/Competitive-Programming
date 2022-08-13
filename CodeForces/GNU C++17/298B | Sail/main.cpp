#include <bits/stdc++.h>
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long

using namespace std;

void solve(){
    int t, sx, sy, ex, ey; cin>> t >> sx >> sy >> ex >> ey;
    string s; cin>> s;
    int time(0);

    for(int i = 0; i < s.size(); ++i){
        if(time > t){
            cout<<-1;
            return;
        }
        if(s[i] == 'E'){
            if(ex > sx){
                sx++;
                time++;
            }else{
                time++;
                continue;
            }
        }
        else if(s[i] == 'S'){
            if(ey >= sy){
                time++;
                continue;
            }else{
                sy--;
                time++;
            }
        }
        else if(s[i] == 'W'){
            if(ex < sx){
                sx--;
                time++;
            }else{
                time++;
                continue;
            }
        }
        else if(s[i] == 'N'){
            if(ey > sy){
                sy++;
                time++;
            }else{
                time++;
                continue;
            }
        }
        if(sx == ex && sy == ey){
            cout<<time;
            return;
        }
    }

    cout<<-1;
}

int main() {
    IO
    solve();
}
