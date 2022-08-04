#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;
 
int main() {
    int n, k, cnt = 0, cnt2 = 0; cin>>n>>k;
    int l = -1;
    string num = "0123456789";
    while(n--) {
        string s; cin >> s;
        for(int i = 0; i <= k; ++i){
            l = s.find(num[i]);
            if(l != -1){
                cnt++;
                l = -1;
            }
        }
        if(cnt >= k+1) cnt2++;
        cnt = 0;
    }
    cout<<cnt2;
}