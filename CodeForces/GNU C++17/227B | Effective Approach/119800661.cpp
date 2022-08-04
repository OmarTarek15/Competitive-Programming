#include <iostream>
#include <vector>
#define ll long long
using namespace std;
 
int main(){
    int n; cin>>n;
    int a[100005], x;
    for(int i = 1; i <= n; ++i){
        cin>>x;
        a[x] = i;
    }
    int m, l; cin>>m;
    ll vasya(0), petya(0);
    while(m--){
        cin>>l;
        vasya += a[l];
        petya += n - a[l] + 1;
    }
    cout<<vasya<<" "<<petya;
}