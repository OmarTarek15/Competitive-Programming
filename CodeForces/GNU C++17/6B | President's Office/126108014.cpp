#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main(){
    int i, j, n, m; cin>>n>>m;
    char c; cin>>c;
    char a[105][105];
    set<char> s;
    for(i=0;i<105;++i){
        for(j=0;j<105;++j){
            a[i][j] = '.';
        }
    }
    for(i=1;i<=n;++i){
        for(j=1;j<=m;++j){
            cin>>a[i][j];
        }
    }
    for(i=1;i<=n;++i){
        for(j=1;j<=m;++j){
            if(a[i][j] == c){
                s.insert(a[i+1][j]);
                s.insert(a[i-1][j]);
                s.insert(a[i][j+1]);
                s.insert(a[i][j-1]);
            }
        }
    }
    s.erase('.');
    s.erase(c);
    cout<<s.size();
}