#include <bits/stdc++.h>
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long

using namespace std;

void solve(){
    int n, m; cin>> n >> m;
    char a[110][110];
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j)
            cin>>a[i][j];
    }

    if(n == 1 && m == 1 && a[0][0] == '.'){
        cout<<'B';
        return;
    }else if(n == 1 && m == 1 && a[0][0] == '-'){
        cout<<'-';
        return;
    }

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            if(a[i][j] == '.'){
                if((i+j) % 2 == 0)
                    a[i][j] = 'B';
                else
                    a[i][j] = 'W';
            }
        }
    }

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j)
            cout<<a[i][j];
        cout<<endl;
    }

}

int main() {
    IO
    solve();
}
