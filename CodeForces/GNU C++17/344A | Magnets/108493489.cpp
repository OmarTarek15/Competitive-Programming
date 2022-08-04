#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int n, cnt; cin>>n;
    cnt = 0;
    int arr[n];
    for(int i = 0; i < n; ++i) cin>>arr[i];
    for(int i = 0; i < n; ++i){
        if(arr[i] == 10){
            if(arr[i+1] == 10) continue;
            else cnt++;
        }
        if(arr[i] == 01){
            if(arr[i+1] == 01) continue;
            else cnt++;
        }
    }
    cout<<cnt;
}
 
 