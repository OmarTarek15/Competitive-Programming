#include<bits/stdc++.h>
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
using namespace std;
 
int cats[1000000];
bool visited[1000000];
vector<vector<int>> tree(1000000);
int n , m , ans(0);
void dfs(int u , int cat){
    int sum = 0;
    if(cat > m)
        return;
    visited[u] = true;
    bool l = false;
    for(int v = 0 ; v < tree[u].size() ; v++){
        if(!visited[tree[u][v]]){
            if(cats[tree[u][v]]){
                sum = cat + 1;
            }else
                sum = 0;
            dfs(tree[u][v] , sum);
            l = true;
        }
    }
    if(!l)
        ans++;
}
int main(){
    IO
    cin >> n >> m;
    for(int i = 1 ; i <= n ; i++)
        cin >> cats[i];
    for(int i = 1; i < n ; i++){
        int u , v;
        cin >> u >> v;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }
    dfs(1 , cats[1]);
    cout << ans;
}