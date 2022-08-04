#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;
 
int main() {
    int n, m; cin>>n>>m;
    int cnt = 0;
    while (m > n) {
        if (m % 2 == 1){
            m++;
            cnt++;
        }else{
            m = m / 2;
            cnt++;
        }
    }
    cnt = cnt + (n - m);
    cout<<cnt<<endl;
}