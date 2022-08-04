#include <iostream>
#define ll long long
using namespace std;
 
int main() {
    ll l, r; cin>>l>>r;
    if(l == r || r - l == 1){
        cout<<-1;
    }else if(l % 2 == 0){
        cout<<l<<" "<<l+1<<" "<<l+2;
    }else if(r - l + 1 > 3){
        cout<<l+1<<" "<<l+2<<" "<<l+3;
    }else{
        cout<<-1;
    }
}