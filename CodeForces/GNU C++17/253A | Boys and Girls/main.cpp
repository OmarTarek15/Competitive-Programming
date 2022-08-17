#include <bits/stdc++.h>
#define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long

using namespace std;

void solve(){
    int n, m; cin >> n >> m;
    string ans;
    int s = n + m;

    if(n > m){
        ans += "G";
        for(int i = 0; i < s; ++i){
            if(n == 0 && m != 0){
                while(m!=0){
                    ans += "G";
                    m--;
                }
            }else if(n != 0 && m == 0){
                while(n!=0){
                    ans += "B";
                    n--;
                }
            }
            if(ans[i] == 'B' && m != 0){
                ans += "G";
                m--;
            }else if(ans[i] == 'G' && n != 0){
                ans += "B";
                n--;
            }
        }
    }else{
        ans += "B";
        for(int i = 0; i < s; ++i){
            if(n == 0 && m != 0){
                while(m!=0){
                    ans += "G";
                    m--;
                }
            }else if(n != 0 && m == 0){
                while(n!=0){
                    ans += "B";
                    n--;
                }
            }
            if(ans[i] == 'B' && m != 0){
                ans += "G";
                m--;
            }else if(ans[i] == 'G' && n != 0) {
                ans += "B";
                n--;
            }
        }
    }

    ans.erase(ans.begin());
    cout<<ans;
}

int main() {
    IO
    TxtIO
    solve();
}
