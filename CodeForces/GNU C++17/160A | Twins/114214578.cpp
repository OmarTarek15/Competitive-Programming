#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;
 
int main(){
    int n, sum = 0; cin>>n;
    int a[n];
    for(int i = 0; i < n; ++i){
        cin>>a[i];
        sum += a[i];
    }
    int sum2 = 0, cnt = 0;
    sort(a, a + n, greater<int>());
    for(int i = 0; i < n; ++i){
        sum2 += a[i];
        cnt++;
        if(sum2 > sum / 2) break;
    }
    cout<<cnt;
}