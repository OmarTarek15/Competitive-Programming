#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main() {
    int n, cnt = 0; cin>>n;
    int home[n]; int guest[n];
    for(int i = 0; i < n; ++i) cin>>home[i]>>guest[i];
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            if(home[i] == guest[j]) cnt++;
        }
    }
    cout<<cnt;
}