#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main() {
    int n, cnt = 0, pol = 0; cin>>n;
    for(int i = 0; i < n; ++i){
        int x; cin>>x;
        if(x > 0){
            pol += x;
        }else{
            if(pol < 1){
                cnt++;
            }else{
                pol--;
            }
        }
    }
    cout<<cnt;
}