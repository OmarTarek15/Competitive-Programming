#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;
 
int main() {
    int n, x, y, z; cin>>n;
    int xSum(0), ySum(0), zSum(0);
    while(n--){
        cin>>x>>y>>z;
        xSum += x;
        ySum += y;
        zSum += z;
    }
    if(xSum == 0 && ySum == 0 && zSum ==0) cout<<"YES";
    else cout<<"NO";
    return 0;
}