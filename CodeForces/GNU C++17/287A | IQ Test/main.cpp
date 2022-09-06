#include <bits/stdc++.h>
#define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long

using namespace std;

void solve(){
    char c[4][4];
    for(int i = 0; i < 4; ++i){
        for(int j = 0; j < 4; ++j)
            cin>>c[i][j];
    }

    for(int i = 0; i < 3; ++i){
        for(int j = 0; j < 3; ++j){
            int w(0), p(0);
            for(int x = 0; x < 2; ++x)
                for(int y = 0; y < 2; ++y)
                    if(c[i+x][j+y] == '.')
                        p++;
                    else
                        w++;
            if((w == 3 and p == 1) || (w == 1 and p == 3) || w == 4 || p == 4){
                cout<<"YES";
                return;
            }
        }
    }

    cout<<"NO";
}

int main() {
    IO
    //TxtIO
    solve();
}
