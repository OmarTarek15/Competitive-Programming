#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;
 
int main() {
    int n, m; cin>>n>>m;
    int cnt = 0;
    while(n--){
        cnt++;
        if(cnt % m == 0) cnt++;
    }
    cout<<cnt;
}