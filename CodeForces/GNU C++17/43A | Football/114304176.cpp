#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;
 
int main() {
    int n; cin>>n;
    bool l = false;
    bool k = false;
    string s, d, o;
    int cnt = 0, cnt2 = 0;
    while(n--){
        if(l == false){
            cin>>s;
            cnt++;
            l = true;
        }else{
            cin>>d;
            if(k == false && d != s){
                o = d;
                k = true;
            }
            if(d == s){
                cnt++;
            }else cnt2++;
        }
    }
    if(cnt > cnt2) cout<<s;
    else cout<<o;
}