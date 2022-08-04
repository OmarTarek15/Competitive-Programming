#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main(){
    int i, n, a, b; cin>>n;
    string s;
    while(n--){
        cin>>s>>a>>b;
        if(a >= 2400){
            if(b > a){
                cout<<"YES";
                return 0;
            }
        }else
            continue;
    }
    cout<<"NO";
    return 0;
}