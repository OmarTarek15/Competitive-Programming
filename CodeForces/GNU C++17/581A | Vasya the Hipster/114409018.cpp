#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;
 
int main() {
    int a, b; cin>>a>>b;
    int cnt = 0;
    int l = min(a, b);
    int k = max(a, b) - l;
    while(k > 1){
        cnt++;
        k -= 2;
    }
    cout<<l<<" "<<cnt;
}