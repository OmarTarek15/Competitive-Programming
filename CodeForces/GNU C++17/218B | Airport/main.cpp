#include <bits/stdc++.h>
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long

using namespace std;

void solve(){
    int n, m; cin>> n >> m;
    vector<int> v(m);
    for(int i = 0; i < m; ++i)
        cin>>v[i];
    vector<int> v2 = v;
    int f = n;

    int sum(0), max(0);
    for(int i = 0; i < m; ++i)
        sum += v[i];

    if(sum == n){
        for(int i = 0; i < m; ++i)
            while(v[i] > 0){
                max+=v[i];
                v[i]--;
            }
        cout<<max<<" "<<max;
        return;
    }

    if(m == 1){
        while(v[0] > 0 && n > 0){
            max += v[0];
            v[0]--;
            n--;
        }
        cout<<max<<" "<<max;
        return;
    }

    sort(v.begin(), v.end());
    int i = m-1;
    while(n > 0){
        if(i == 0){
            max += v[i];
            v[i]--;
            sort(v.begin(), v.end());
            n--;
            i = m-1;
        }
        max += v[i];
        v[i]--;
        sort(v.begin(), v.end());
        n--;
        if(v[i] >= v[i-1])
            continue;
        else
            i--;
    }

    sort(v2.begin(), v2.end());
    int min(0);
    for(int j = 0; j < m; ++j){
        while(v2[j] != 0 && f > 0){
            min += v2[j];
            v2[j]--;
            f--;
        }
    }

    cout<<max<<" "<<min;

}

int main() {
    IO
    solve();
}
