#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;
 
int main() {
    int n, d; cin>>n>>d;
    if(d == 10){
        if(n == 1){
            cout<<-1;
            return 0;
        }
        for(int i = 0;i < n-1; ++i){
            cout<<1;
        }
        cout<<0;
    }else{
        for(int i = 0; i < n; ++i) cout<<d;
    }
}