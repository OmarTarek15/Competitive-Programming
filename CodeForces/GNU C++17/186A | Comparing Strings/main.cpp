#include <bits/stdc++.h>
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long

using namespace std;

void solve(){
    char a[100005], b[100005]; cin >> a >> b;
    int l1 = strlen(a), l2 = strlen(b);
    char x, y;

    if(l1 != l2)
        cout<<"NO";
    else{
        int k(0), p(0);

        for(int i = 0; i < l1; ++i){
            if(a[i] != b[i]){
                k++;
                if(k == 1){
                    x = a[i];
                    y = b[i];
                }else if(k == 2){
                    if(a[i] == y && b[i] == x)
                        p = 1;
                }else
                    break;
            }
        }

        if(p == 1 && k == 2)
            cout<<"YES";
        else
            cout<<"NO";
    }

}

int main() {
    IO
    solve();
}
