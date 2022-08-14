#include <bits/stdc++.h>
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long

using namespace std;

void solve(){
    int n; cin >> n;
    int arr[10];
    for(int i = 0; i < 10; ++i)
        arr[i] = 0;
    for(int i = 0; i < n; ++i){
        int x; cin >> x;
        arr[x]++;
    }

    int ans[5];
    for(int i = 0; i < 5; ++i)
        ans[i] = 0;
    bool flag = true;

    for(int i = 0; i < n/3; ++i){
        if(arr[4] > 0 && arr[2] > 0 && arr[1] > 0){
            ans[0]++;
            arr[4]--;
            arr[2]--;
            arr[1]--;
            continue;
        }
        if(arr[6] > 0 && arr[2] > 0 && arr[1] > 0){
            ans[1]++;
            arr[6]--;
            arr[2]--;
            arr[1]--;
            continue;
        }
        if(arr[6] > 0 && arr[3] > 0 && arr[1] > 0){
            ans[2]++;
            arr[6]--;
            arr[3]--;
            arr[1]--;
            continue;
        }
        flag = false;
        break;
    }

    if(!flag)
        cout<<-1;
    else{
        for(int i = 0; i < ans[0]; ++i)
            cout<<"1 2 4\n";
        for(int i = 0; i < ans[1]; ++i)
            cout<<"1 2 6\n";
        for(int i = 0; i < ans[2]; ++i)
            cout<<"1 3 6\n";
    }
}

int main() {
    IO
    solve();
}
