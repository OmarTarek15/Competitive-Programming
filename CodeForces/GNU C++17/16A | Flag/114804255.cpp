#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;
 
int main() {
    ll n, m;
    char a[105][105];
    while(cin>>n>>m){
        for(int i = 0; i < n; ++i){
            for(int j = 0; j < m; ++j){
                cin>>a[i][j];
            }
        }
        bool l = true;
        for(int i = 1; i < n; ++i){
            for(int j = 0; j < m; ++j){
                if(a[i][j] == a[i-1][j]){
                    l = false;
                    break;
                }
            }
        }
        for(int i = 0; i < n; ++i) {
            for (int j = 1; j < m; ++j){
                if(a[i][j] != a[i][j-1]){
                    l = false;
                    break;
                }
            }
        }
        if(l == 1) cout<<"YES";
        else cout<<"NO";
        return 0;
    }
}