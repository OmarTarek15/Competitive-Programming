#include <bits/stdc++.h>
#define TxtIO freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
 
using namespace std;
 
void solve(){
    int r, c; cin >> r >> c;
    char a[r][c];
    for(int i = 0; i < r; ++i)
        for(int j = 0; j < c; ++j)
            cin>> a[i][j];
 
    int visited[r][c] = {false};
    int cnt(0), ans(0);
    for(int i = 0; i < r; ++i){
        for(int j = 0; j < c; ++j){
            if(a[i][j] != 'S')
                cnt++;
            else{
                cnt = 0;
                break;
            }
        }
        if(cnt == c){
            ans += cnt;
            cnt = 0;
            visited[i][0] = true;
        }
    }
 
    cnt = 0;
    for(int j = 0; j < c; ++j){
        int vis(0);
        for(int i = 0; i < r; ++i){
            if(a[i][j] != 'S'){
                if(visited[i][0] == true){
                    vis++;
                    cnt++;
                }else
                    cnt++;
            }else{
                cnt = 0;
                break;
            }
        }
        if(cnt == r){
            ans += cnt-vis;
            cnt = 0;
        }
    }
 
    cout<<ans;
}
 
int main() {
    IO
    //TxtIO
    solve();
}
