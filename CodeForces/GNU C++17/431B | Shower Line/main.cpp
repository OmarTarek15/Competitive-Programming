#include <bits/stdc++.h>
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long

using namespace std;

void solve(){
    int n = 5;
    int arr[6][6];
    int a[6];

    for(int i = 0; i < n; ++i)
        a[i] = i;
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            cin>>arr[i][j];
        }
    }

    int ans = -1, tmp;
    do{
        tmp = arr[a[0]][a[1]] + arr[a[1]][a[0]];
        tmp += arr[a[2]][a[3]] + arr[a[3]][a[2]];

        tmp += arr[a[1]][a[2]] + arr[a[2]][a[1]];
        tmp += arr[a[3]][a[4]] + arr[a[4]][a[3]];

        tmp += arr[a[2]][a[3]] + arr[a[3]][a[2]];

        tmp += arr[a[3]][a[4]] + arr[a[4]][a[3]];

        if(tmp > ans){
            ans = tmp;
        }

    }while(next_permutation(a, a+n));

    cout<<ans;
}

int main() {
    IO
    solve();
}
