#include <iostream>
using namespace std;
 
int main(){
    int n, h, cnt; cin>>n>>h;
    cnt = 0;
    int arr[n];
    for(int i = 0; i < n; ++i) cin>>arr[i];
    for(int i = 0; i < n; ++i){
        if(arr[i] <= h) cnt += 1;
        if(arr[i] > h) cnt += 2;
    }
    cout<<cnt;
}