#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;
 
int main() {
    int n, x; cin>>n>>x;
    bool poss = true;
    while(n--){
        int a, b; cin>>a>>b;
        if(x == a || x == b || x == 7 - a || x == 7 - b){
            poss = false;
        }
    }
    if(poss) cout<<"YES";
    else cout<<"NO";
}